/*
FUNCTION_NAME: FUN_06478f74
ENTRY_POINT: 06478f74
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_06478f74(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  puVar5 = Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo;
  if ((DAT_076df37f & 1) == 0) {
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrPluginTracking_OvrPluginInputTrackingProvider_TypeInfo);
    DAT_076df37f = 1;
  }
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar8 = *(long *)puVar5;
  }
  lVar10 = (*(long **)(lVar8 + 0xb8))[1];
  if (lVar10 != 0) {
    uVar9 = param_1 >> 0x17;
    if (uVar9 < *(uint *)(lVar10 + 0x18)) {
      lVar8 = **(long **)(lVar8 + 0xb8);
      if (lVar8 == 0) goto LAB_0647913c;
      if (uVar9 < *(uint *)(lVar8 + 0x18)) {
        bVar4 = *(byte *)(lVar10 + (ulong)uVar9 + 0x20);
        uVar1 = param_1 & 0x7fffff;
        uVar7 = (uint)*(ushort *)(lVar8 + (ulong)uVar9 * 2 + 0x20) +
                (uVar1 >> (ulong)(bVar4 & 0x1f) & 0xffff);
        if (3 < param_2 - 8U) {
          return uVar7;
        }
        uVar2 = bVar4 & 0x1f;
        uVar3 = uVar7 & 0x7c00;
        switch(param_2) {
        case 8:
          if ((param_1 & 0x7f800000) == 0x33000000) {
            uVar7 = uVar7 + 1;
          }
          if (uVar3 == 0x7c00) {
            return uVar7;
          }
          return uVar7 + (uVar1 >> (ulong)(bVar4 - 1 & 0x1f) & 1);
        case 9:
          if (((uint)(uVar3 != 0x7c00) & (uVar7 & 0x8000) >> 0xf) != 0) {
            if ((uVar9 < 0x167) && (uVar9 != 0x100)) {
              uVar7 = uVar7 + 1;
            }
            else if ((uVar1 & (-1 << (ulong)uVar2 ^ 0xffffffffU)) != 0) {
              uVar7 = uVar7 + 1;
            }
          }
          bVar6 = uVar7 != 0x7c00 || uVar9 == 0xff;
          uVar9 = 0x7bff;
          break;
        case 10:
          if (((uVar7 & 0x8000) == 0) && (uVar3 != 0x7c00)) {
            if ((uVar9 < 0x67) && (uVar9 != 0)) {
              uVar7 = uVar7 + 1;
            }
            else if ((uVar1 & (-1 << (ulong)uVar2 ^ 0xffffffffU)) != 0) {
              uVar7 = uVar7 + 1;
            }
          }
          bVar6 = uVar7 != 0xfc00 || uVar9 == 0x1ff;
          uVar9 = 0xfbff;
          break;
        case 0xb:
          if (uVar3 != 0x7c00) {
            return uVar7;
          }
          return uVar7 + (bVar4 | 0xfffffffe) + 1;
        }
        if (bVar6) {
          uVar9 = uVar7;
        }
        return uVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
  }
LAB_0647913c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


