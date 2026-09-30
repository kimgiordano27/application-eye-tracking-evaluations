/*
FUNCTION_NAME: FUN_060b62a8
ENTRY_POINT: 060b62a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x060b6938) */
/* WARNING: Removing unreachable block (ram,0x060b6790) */
/* WARNING: Removing unreachable block (ram,0x060b692c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_060b62a8(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_58;
  int local_50;
  undefined8 local_48;
  long *local_40;
  int local_34;
  
  if ((DAT_06dc4fa3 & 1) == 0) {
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<MarkToBaseAdjustmentRecord,_uint>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<MarkToBaseAdjustmentRecord,_uint>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<Glyph,_uint>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                );
    FUN_02d965b8(OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                );
    DAT_06dc4fa3 = 1;
  }
  local_34 = *param_1;
  local_48 = 0;
  local_40 = (long *)0x0;
  local_50 = 0;
  if (local_34 != 0) {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar5 = *(undefined8 *)(lVar12 + 0x10);
    uVar11 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<ConnectionModule_<OnSessionChanged>d__22>__
                              );
    FUN_06644864(uVar3,uVar5,uVar11,0);
    *(undefined8 *)(param_1 + 10) = uVar3;
    LeanTween__value(param_1 + 10,uVar3);
    if (local_34 != 0) {
      plVar9 = *(long **)(lVar12 + 0x20);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_060b6514;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)
               FUN_02dd004c(plVar9,*(long *)
                                    UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                            ,0);
LAB_060b6514:
      local_40 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      puVar2 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
      puVar1 = PTR_DAT_069fbff8;
      do {
        plVar9 = local_40;
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *local_40;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_060b6598;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(local_40,*(long *)puVar1,0);
LAB_060b6598:
        uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        plVar9 = local_40;
        if ((uVar7 & 1) == 0) {
          if ((-1 < local_34) || (local_40 == (long *)0x0))
          goto 
          UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionRequestProviderDelegate___ctor
          ;
          lVar6 = *local_40;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_060b6688;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_060b6670;
        }
        if (local_40 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar6 = *local_40;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_060b65fc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_02dd004c(local_40,*(long *)puVar2,0);
LAB_060b65fc:
        auVar13 = (*(code *)*puVar4)(plVar9,puVar4[1]);
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_06645d78(*(long *)(param_1 + 10),auVar13._0_8_,auVar13._8_8_,0);
      } while( true );
    }
  }
  local_34 = -1;
  local_48 = *(undefined8 *)(param_1 + 0xc);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = -1;
  goto LAB_060b6488;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_060b6670:
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_060b6778;
    }
  }
LAB_060b6688:
  puVar4 = (undefined8 *)FUN_02dd004c(local_40,*(long *)PTR_DAT_069fbff0,0);
LAB_060b6778:
  (*(code *)*puVar4)(plVar9,puVar4[1]);

  UnityEngine_XR_ARCore_ARCoreSessionSubsystem_NativeApi_CameraPermissionRequestProviderDelegate___ctor
  :
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_066464e8(*(long *)(param_1 + 10),*(undefined4 *)(lVar12 + 0x28),0);
  if ((*(long *)(lVar12 + 0x30) != 0) &&
     (((uVar7 = thunk_FUN_0536b75c(*(undefined8 *)(lVar12 + 0x18),*(undefined8 *)PTR_DAT_069ff540,0)
       , (uVar7 & 1) != 0 ||
       (uVar7 = thunk_FUN_0536b75c(*(undefined8 *)(lVar12 + 0x18),
                                   *(undefined8 *)
                                    OVRSceneVolumeMeshFilter_<CreateVolumeMesh>d__7_TypeInfo,0),
       (uVar7 & 1) != 0)) ||
      (uVar7 = thunk_FUN_0536b75c(*(undefined8 *)(lVar12 + 0x18),
                                  *(undefined8 *)
                                   Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                  ,0), (uVar7 & 1) != 0)))) {
    uVar11 = *(undefined8 *)(lVar12 + 0x30);
    lVar6 = *(long *)(param_1 + 10);
    uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<CustomMatchmakingNGO_<Awake>d__5>__
                              );
    FUN_066468f0(uVar5,uVar11,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_06644c54(lVar6,uVar5,0);
  }
  lVar6 = *(long *)(param_1 + 10);
  uVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<Client_<WebsocketErrorListener>d__51>__
                            );
  FUN_066443b4(uVar5,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_06644b8c(lVar6,uVar5,0);
  if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_06644f34(*(long *)(param_1 + 10),0);
  local_48 = FUN_060b6ac4();
  uVar7 = FUN_047e6248(&local_48,
                       *(undefined8 *)
                        Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__);
  if ((uVar7 & 1) == 0) {
    local_34 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = local_48;
    LeanTween__value(param_1 + 0xc,0);
    if (*(int *)(*(long *)Method_System_Linq_Enumerable_OrderBy<Glyph,_uint>__ + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)Method_System_Linq_Enumerable_OrderBy<Glyph,_uint>__,extraout_x1,
                         param_1);
    }
    FUN_031fccd8(param_1 + 2,&local_48,param_1,
                 *(undefined8 *)
                  Method_System_Linq_Enumerable_OrderBy<MarkToBaseAdjustmentRecord,_uint>__);
    uVar5 = 0;
    iVar10 = 10;
    goto LAB_060b64a4;
  }
LAB_060b6488:
  uVar5 = FUN_047e6288(&local_48,
                       *(undefined8 *)
                        Method_System_Linq_Enumerable_OrderBy<MarkToMarkAdjustmentRecord,_uint>__);
  iVar10 = 0xb;
LAB_060b64a4:
  if ((local_34 < 0) && (plVar9 = *(long **)(param_1 + 10), plVar9 != (long *)0x0)) {
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar4 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_060b66a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02dd004c(plVar9,*(long *)PTR_DAT_069fbff0,0);
LAB_060b66a4:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  if (iVar10 == 0xb) {
    lVar12 = *(long *)Method_System_Linq_Enumerable_OrderBy<Glyph,_uint>__;
    *param_1 = -2;
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    FUN_040b19d8(param_1 + 2,uVar5,
                 *(undefined8 *)
                  Method_System_Linq_Enumerable_OrderBy<MarkToBaseAdjustmentRecord,_uint>__);
  }
  else if (iVar10 == 0) {
    uVar5 = (&uStack_58)[local_50 + -1];
    *param_1 = -2;
    lVar12 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_OrderBy<Glyph,_uint>__);
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar11 = thunk_FUN_02dfd288(Method_System_Linq_Enumerable_OrderBy<MemberInfo,_int>__);
    FUN_040b1c24(param_1 + 2,uVar5,uVar11);
  }
  return;
}


