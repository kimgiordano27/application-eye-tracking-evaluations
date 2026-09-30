/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 01a19b18
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetAppPerfStats(ulong param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int unaff_w20;
  long *plVar7;
  int iVar8;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_1958);
    *(undefined1 *)(unaff_x22 + 0x9aa) = 1;
  }
  iVar8 = (int)((ulong)param_3 >> 0x20);
  if (1 < iVar8 - 2U) {
    if (iVar8 != 1) {
      if (iVar8 == 0) {
        if (unaff_w20 == 3) goto LAB_01a19bcc;
        (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      }
      else {
        if (unaff_w20 == 3) goto LAB_01a19bcc;
LAB_01a19c14:
        if (iVar8 != 0) {
          if (iVar8 != 1) {
            return;
          }
          goto LAB_01a19c20;
        }
      }
      uVar3 = (undefined1)param_2[7];
      goto LAB_01a19bd0;
    }
    if (unaff_w20 != 3) {
      if (unaff_w20 == 0) {
        plVar7 = (long *)param_2[4];
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12a);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_1958) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_01a19bf4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_00d59724(plVar7,*(long *)StringLiteral_1958,2);
LAB_01a19bf4:
        uVar2 = (*(code *)*puVar1)(plVar7,puVar1[1]);
        (**(code **)(*param_2 + 0x1a8))(param_2,uVar2,*(undefined8 *)(*param_2 + 0x1b0));
        goto LAB_01a19c14;
      }
LAB_01a19c20:
      uVar3 = 1;
      goto LAB_01a19bd0;
    }
  }
LAB_01a19bcc:
  uVar3 = 0;
LAB_01a19bd0:
  *(undefined1 *)((long)param_2 + 0x51) = uVar3;
  return;
}


