/*
FUNCTION_NAME: Unity.Services.Wire.Internal.Subscription$$ProcessPublication
ENTRY_POINT: 06025500
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x060259b4) */

void Unity_Services_Wire_Internal_Subscription__ProcessPublication
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long *plVar9;
  long *unaff_x21;
  long *unaff_x22;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
                    /* try { // try from 0602550c to 0612550f has its CatchHandler @ 06025f68 */
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06025538;
    }
                    /* try { // try from 06025510 to 06125517 has its CatchHandler @ 06025f4c */
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_02dd004c();
                    /* try { // try from 06025528 to 06125533 has its CatchHandler @ 06025ebc */
LAB_06025538:
                    /* try { // try from 06025540 to 0612554b has its CatchHandler @ 06025ef4 */
  uVar4 = (*(code *)*puVar3)();
                    /* try { // try from 06025550 to 0612555b has its CatchHandler @ 06025eb0 */
  uVar5 = FUN_0536c9cc(uVar4,0);
  if ((uVar5 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 06025570 to 0612557b has its CatchHandler @ 06025f04 */
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_060255a4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
                    /* try { // try from 06025584 to 061255a3 has its CatchHandler @ 06025f58 */
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c();
LAB_060255a4:
    uVar4 = (*(code *)*puVar3)();
                    /* try { // try from 060255b0 to 061255bb has its CatchHandler @ 06025ee4 */
                    /* try { // try from 060255bc to 061255cb has its CatchHandler @ 06025ee0 */
    FUN_05362cb4(*(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                 ,uVar4,0);
                    /* try { // try from 060255cc to 061255db has its CatchHandler @ 06025f08 */
    if (unaff_x19 == 0) goto LAB_060259ac;
    FUN_04e935f0();
  }
                    /* try { // try from 060255f4 to 061255fb has its CatchHandler @ 06025f00 */
  if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_06304ca4(0);
  puVar1 = PTR_DAT_069fb9d8;
  if (unaff_x19 != 0) {
                    /* try { // try from 0602561c to 0612574f has its CatchHandler @ 06025f68 */
    FUN_04e935f0();
    FUN_04e935f0();
    uVar4 = FUN_02d966a4(*(undefined8 *)puVar1,0);
    lVar7 = FUN_02d966a4(*(undefined8 *)puVar1,2);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
        LeanTween__value((undefined8 *)(lVar7 + 0x20));
        puVar1 = OVRPlugin_OVRP_1_36_0_TypeInfo;
        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar7 + 0x28) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
          ;
          uVar6 = LeanTween__value();
          uVar6 = FUN_06021e18(uVar6,lVar7);
          uVar5 = FUN_0536c9cc(uVar6,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_04e935f0();
          }
          uVar6 = *(undefined8 *)puVar1;
          uVar4 = FUN_06021ef0(uVar5,uVar4);
          uVar5 = FUN_0536c9cc(uVar4,0);
          if ((((uVar5 & 1) == 0) ||
              (uVar5 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)PTR_DAT_069ff540,0), (uVar5 & 1) != 0
              )) || (uVar5 = thunk_FUN_0536b75c(uVar6,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                                ,0), (uVar5 & 1) != 0)) {
            FUN_04e935f0();
          }
          if (unaff_x20 == 0) {
            return;
          }
          plVar9 = *(long **)(unaff_x20 + 0x28);
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar7 = *plVar9;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) ==
                  *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo)
              {
                puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_060257fc;
              }
              uVar5 = uVar5 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)
                   FUN_02dd004c(plVar9,*(long *)
                                        UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                                ,0);
LAB_060257fc:
          plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
          puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
          puVar1 = PTR_DAT_069fbff8;
          do {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *plVar9;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_06025880;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar1,0);
LAB_06025880:
            uVar5 = (*(code *)*puVar3)(plVar9,puVar3[1]);
            if ((uVar5 & 1) == 0) {
              if (plVar9 == (long *)0x0) {
                return;
              }
              lVar7 = *plVar9;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 == 0) goto LAB_06025958;
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_06025940;
            }
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar7 = *plVar9;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 != 0) {
              piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                  puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_060258e4;
                }
                uVar5 = uVar5 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar5 != 0);
            }
            puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)puVar2,0);
LAB_060258e4:
            (*(code *)*puVar3)(plVar9,puVar3[1]);
            FUN_04e935dc();
          } while( true );
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
  }
LAB_060259ac:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar8 = piVar8 + 4;
    if (uVar5 == 0) break;
LAB_06025940:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06025974;
    }
  }
LAB_06025958:
  puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_06025974:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  return;
}


