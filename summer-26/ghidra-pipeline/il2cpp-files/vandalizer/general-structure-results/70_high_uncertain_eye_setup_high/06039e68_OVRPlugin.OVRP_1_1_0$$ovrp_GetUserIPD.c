/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserIPD
ENTRY_POINT: 06039e68
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetUserIPD(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x21;
  
  FUN_031f20f4(*(undefined8 *)(param_1 + 0xdb0));
  FUN_031f20f4(PTR_DAT_075f6e38);
  FUN_031f20f4(PTR_DAT_0759b2a8);
  *(undefined1 *)(unaff_x21 + 0xc3c) = 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar2 = FUN_06e5ba28(uVar7,0,0);
  puVar1 = PTR_DAT_075f6e38;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar5 = *(long *)(unaff_x19 + 0x80);
  if ((lVar5 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x88), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f6e38) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_06039f24;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075f6e38,1);
LAB_06039f24:
    (*(code *)*puVar3)(plVar8,lVar5 + 0x24,puVar3[1]);
    lVar5 = *(long *)(unaff_x19 + 0x80);
    if ((lVar5 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x90), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f5db0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_06039fa0;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)PTR_DAT_075f5db0,1);
LAB_06039fa0:
      (*(code *)*puVar3)(plVar8,lVar5 + 0x18,puVar3[1]);
      uVar9 = 0;
      while (lVar5 = *(long *)(unaff_x19 + 0xa0), lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar4 = *(long *)(unaff_x19 + 0x80);
        if ((lVar4 == 0) ||
           (plVar8 = *(long **)(lVar5 + (long)(int)uVar9 * 8 + 0x20), plVar8 == (long *)0x0)) break;
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_0603a02c;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar1,1);
LAB_0603a02c:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar9 = uVar9 + 1;
        if (uVar9 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


