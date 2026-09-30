/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 07704594
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsSupported(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000008;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0x78));
  FUN_04447ba8(PTR_DAT_09f2f830);
  FUN_04447ba8(PTR_DAT_09f2f838);
  FUN_04447ba8(PTR_DAT_09f2f840);
  *(undefined1 *)(unaff_x20 + 0xffc) = 1;
  lVar3 = FUN_076f25e4();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x10) == '\0') {
      in_stack_00000008 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = thunk_FUN_04484e3c(*(undefined8 *)PTR_DAT_09f2f838,&stack0x00000008);
      FUN_078ab14c(*(undefined8 *)PTR_DAT_09f2f840,uVar5,0);
      FUN_076f1130();
      return;
    }
    if ((*(long *)(lVar3 + 0x28) != 0) && (lVar4 = FUN_076fd5c8(), lVar4 != 0)) {
      if (*(char *)(lVar4 + 0x28) != '\0') {
        return;
      }
      bVar2 = *(byte *)(unaff_x19 + 0xdf) ^ 1;
      *(byte *)(unaff_x19 + 0xdf) = bVar2;
      if (*(long *)(lVar3 + 0x28) != 0) {
        puVar1 = (undefined8 *)(unaff_x19 + 0x10c);
        if (bVar2 != 0) {
          puVar1 = (undefined8 *)(unaff_x19 + 0xf4);
        }
        FUN_076fd058(*(long *)(lVar3 + 0x28),*puVar1);
        lVar3 = *(long *)(unaff_x19 + 0x58);
        if (*(char *)(unaff_x19 + 0xdf) == '\0') {
          if (lVar3 == 0) goto LAB_077046f4;
          uVar6 = 0x43b00000;
        }
        else {
          uVar6 = DAT_01c75b4c;
          if (lVar3 == 0) goto LAB_077046f4;
        }
        FUN_09538ff0(uVar6,0x441c0000,lVar3,0);
        lVar3 = FUN_077046f8();
        uVar6 = FUN_07704788();
        if (*(char *)(unaff_x19 + 0xdf) == '\0') {
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0xf4));
          fVar8 = (float)NEON_ucvtf(*(undefined4 *)(unaff_x19 + 0xf8));
          FUN_094c3038(uVar6,fVar7 / fVar8,0);
        }
        if (lVar3 != 0) {
          FUN_094c0688(lVar3,0);
          return;
        }
      }
    }
  }
LAB_077046f4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


