/*
FUNCTION_NAME: Oculus.Interaction.Body.PoseDetection.BodyPoseData$$OnBeforeSerialize
ENTRY_POINT: 035cfdd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x035d0068) */
/* WARNING: Removing unreachable block (ram,0x035d0098) */

void Oculus_Interaction_Body_PoseDetection_BodyPoseData__OnBeforeSerialize(ulong param_1)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long in_stack_00000008;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000030;
  int iStack0000000000000038;
  undefined4 uStack000000000000003c;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035cfdc4 with catch @ 035cfdd0
                        */
  uVar7 = 0;
  param_1 = param_1 & 0xffffffff;
  plVar1 = (long *)(unaff_x19 + 0x30);
  do {
    if (param_1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    lVar8 = *(long *)(unaff_x27 + uVar7 * 8 + 0x20);
    thunk_FUN_01f3e6f0();
    if (lVar8 != 0) {
      for (lVar8 = FUN_027263f0(lVar8,*(undefined8 *)
                                       Method_DG_Tweening_DOTweenModuleUnityVersion_<>c__DisplayClass8_0_<DOOffset>b__0__
                               ); lVar8 != 0;
          lVar8 = FUN_027262e8(lVar8,*(undefined8 *)
                                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass9_0_<DOPreferredSize>b__1__
                              )) {
        iVar2 = FUN_027262cc(lVar8,*(undefined8 *)
                                    Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass9_0_<DOPreferredSize>b__0__
                            );
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
          lVar4 = FUN_02726294(lVar8,iVar2,*unaff_x21);
          thunk_FUN_01f3e6f0();
          *plVar1 = lVar4;
          thunk_FUN_01f51358(plVar1,lVar4);
          lVar4 = *plVar1;
          thunk_FUN_01f3e6f0();
          if (lVar4 != 0) {
            in_stack_00000030 = lVar8;
            thunk_FUN_01f51358(&stack0x00000030,lVar8);
            plVar9 = (long *)*plVar1;
            iStack0000000000000038 = iVar2;
            thunk_FUN_01f3e6f0();
            if ((plVar9 == (long *)0x0) || (*plVar9 != *unaff_x26)) {
              Oculus_Interaction_Body_PoseDetection_BodyPoseDebugGizmos__Start();
            }
            else {
              plVar9 = (long *)plVar9[6];
              uVar5 = thunk_FUN_01f117cc(*unaff_x25);
              FUN_035ccaf0();
              in_stack_00000028 = CONCAT44(uStack000000000000003c,iStack0000000000000038);
              in_stack_00000020 = in_stack_00000030;
              uVar6 = thunk_FUN_01f113fc(*unaff_x20,&stack0x00000020);
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              (**(code **)(*plVar9 + 0x178))(plVar9,uVar5,uVar6,*(undefined8 *)(*plVar9 + 0x180));
              uVar3 = FUN_035b049c(0);
              thunk_FUN_01f3e6f0();
              *(undefined4 *)(unaff_x19 + 0x24) = uVar3;
            }
          }
        }
      }
    }
    param_1 = (ulong)*(uint *)(unaff_x27 + 0x18);
    uVar7 = uVar7 + 1;
  } while ((long)uVar7 < (long)(int)*(uint *)(unaff_x27 + 0x18));
  thunk_FUN_01f3e6f0();
  *(undefined4 *)(unaff_x19 + 0x20) = 3;
  thunk_FUN_01f3e6f0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  thunk_FUN_01f51358((undefined8 *)(unaff_x19 + 0x30),0);
  FUN_035db3f4(0);
  if (in_stack_00000008 != 0) {
    thunk_FUN_01efb3a4(Method_System_TermInfoDriver_Init__);
    uVar5 = thunk_FUN_01f117cc();
    FUN_034f6200(uVar5,in_stack_00000008,0);
    uVar6 = thunk_FUN_01efb3a4(Method_DG_Tweening_DOTweenModuleUtils_Physics_SetOrientationOnPath__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar5,uVar6);
  }
  return;
}


