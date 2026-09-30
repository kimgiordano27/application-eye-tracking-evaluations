/*
FUNCTION_NAME: FUN_0685a200
ENTRY_POINT: 0685a200
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_0685a200(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_071d6b49 & 1) == 0) {
    FUN_02f07e70(OVRPlugin_OVRP_1_37_0_TypeInfo);
    FUN_02f07e70(OVRPlugin_OVRP_1_38_0_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d0fd68);
    FUN_02f07e70(OVRPlugin_Hand_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_UIR_VectorImageRenderInfo_TypeInfo);
    DAT_071d6b49 = 1;
  }
  if (*(long *)(param_1 + 0x3d0) != 0) {
    FUN_04710afc(*(long *)(param_1 + 0x3d0),param_2,*(undefined8 *)OVRPlugin_OVRP_1_37_0_TypeInfo);
    puVar3 = OVRPlugin_Hand_TypeInfo;
    puVar2 = UnityEngine_UIElements_UIR_VectorImageRenderInfo_TypeInfo;
    puVar1 = PTR_DAT_06d0fd68;
    if (*(long *)(param_1 + 0x3d0) != 0) {
      FUN_04710bd8(*(long *)(param_1 + 0x3d0),param_2 == 1,
                   *(undefined8 *)OVRPlugin_OVRP_1_38_0_TypeInfo);
      plVar4 = (long *)FUN_068c633c(param_1,0);
      if (param_2 == 0) {
        uVar5 = FUN_0465ecfc(2,*(undefined8 *)puVar2);
        if (plVar4 == (long *)0x0) goto LAB_0685a424;
        lVar8 = *plVar4;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_0685a3c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar4,lVar7,0x15);
LAB_0685a3c0:
        (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar3;
        }
        lVar11 = 0x10;
        lVar8 = 8;
      }
      else {
        uVar5 = FUN_0465ecfc(0,*(undefined8 *)puVar2);
        if (plVar4 == (long *)0x0) goto LAB_0685a424;
        lVar8 = *plVar4;
        lVar7 = *(long *)puVar1;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_0685a380;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02eea86c(plVar4,lVar7,0x15);
LAB_0685a380:
        (*(code *)*puVar6)(plVar4,uVar5,puVar6[1]);
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_02f12b58();
          lVar7 = *(long *)puVar3;
        }
        lVar11 = 8;
        lVar8 = 0x10;
      }
      FUN_068cbd7c(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + lVar8),0);
      FUN_068cbc54(param_1,*(undefined8 *)(*(long *)(*(long *)puVar3 + 0xb8) + lVar11),0);
      return;
    }
  }
LAB_0685a424:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


