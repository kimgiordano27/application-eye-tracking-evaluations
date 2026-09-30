/*
FUNCTION_NAME: FUN_0677d65c
ENTRY_POINT: 0677d65c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_5
*/


void FUN_0677d65c(long param_1,long *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [12];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 auStack_2b8 [296];
  undefined1 auStack_190 [296];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_2c0 = param_3;
  if ((DAT_07558648 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f3f98);
    FUN_03188a78(PTR_DAT_070f2ff8);
    DAT_07558648 = 1;
  }
  memset(auStack_190,0,0x128);
  memset(auStack_2b8,0,0x128);
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(long *)(lVar5 + 0x28) != 0)) {
    if ((*(char *)(param_1 + 0xcc) != '\0') ||
       (iVar2 = *(int *)(*(long *)(lVar5 + 0x28) + 0x10), iVar2 == -1)) {
LAB_0677d830:
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return;
      }
      goto 
      UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate__BeginInvoke
      ;
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    if (lVar5 != 0) {
      FUN_06a13cf0(auStack_2b8,*(undefined8 *)(lVar5 + 0x18),*(undefined8 *)(lVar5 + 0x20),iVar2,0);
      if (*(int *)(*(long *)PTR_DAT_070f2ff8 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      lVar5 = FUN_0674f074(0);
      if (lVar5 != 0) {
        FUN_06a13ce4(auStack_2b8,*(undefined1 *)(lVar5 + 0xf8),0);
        memcpy(auStack_190,auStack_2b8,0x128);
        puVar4 = PTR_DAT_070f3f98;
        if (0 < *(int *)(param_1 + 200)) {
          lVar7 = 0;
          uVar8 = 0;
          lVar5 = 0x20;
          do {
            lVar6 = *param_2;
            if ((param_5 & 1) == 0) {
              if (lVar6 == 0) goto LAB_0677d860;
              lVar6 = *(long *)(lVar6 + 0x50);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_031e5338();
              }
              FUN_06a1339c(&local_2d8,&local_2c0,auStack_190,0);
              if (lVar6 == 0) goto LAB_0677d860;
              if (*(uint *)(lVar6 + 0x18) <= uVar8)
              goto 
              UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate__Invoke
              ;
              puVar1 = (undefined8 *)(lVar6 + lVar5);
              puVar1[2] = local_2c8;
              puVar1[1] = uStack_2d0;
              *puVar1 = local_2d8;
            }
            else {
              if ((lVar6 == 0) || (param_4 == 0)) goto LAB_0677d860;
              lVar6 = *(long *)(lVar6 + 0x58);
              auVar9 = FUN_0664801c(param_4,auStack_190,0);
              if (lVar6 == 0) goto LAB_0677d860;
              if (*(uint *)(lVar6 + 0x18) <= uVar8) {

                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate__Invoke
                :
                if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03188ce0();
                }
                goto 
                UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate__BeginInvoke
                ;
              }
              *(undefined1 (*) [12])(lVar6 + lVar7 + 0x20) = auVar9;
            }
            uVar8 = uVar8 + 1;
            lVar5 = lVar5 + 0x18;
            lVar7 = lVar7 + 0xc;
          } while ((long)uVar8 < (long)*(int *)(param_1 + 200));
        }
        goto LAB_0677d830;
      }
    }
  }
LAB_0677d860:
  if (*(long *)(lVar3 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }

  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_0000043F_PostfixBurstDelegate__BeginInvoke
  :
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


