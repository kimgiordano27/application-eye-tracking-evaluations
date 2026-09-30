/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._ShowKeyboard$$Invoke
ENTRY_POINT: 03710a14
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVROverlay__ShowKeyboard__Invoke(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  long in_x10;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *plVar10;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  piVar8 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar8 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_03710a50;
    }
    in_x9 = in_x9 + -1;
    piVar8 = piVar8 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_03710a50:
  (*(code *)*puVar3)();
  if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03710c60;
  uVar4 = FUN_04034964(*(long *)(unaff_x19 + 0x28),0);
  if ((uVar4 & 1) == 0) {
    plVar9 = *(long **)(unaff_x19 + 0x38);
    if (plVar9 == (long *)0x0) goto LAB_03710c60;
    lVar7 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_03710ac8;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar9,*unaff_x22,3);
LAB_03710ac8:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    iVar1 = *(int *)(unaff_x19 + 0x20);
    if ((DAT_048360c6 & 1) == 0) {
      thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_1__);
      DAT_048360c6 = 1;
    }
    if (iVar2 < (**(int **)(*(long *)
                             Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_1__ +
                           0xb8) * iVar1) / 1000) {
      return;
    }
    if ((char)(*(int **)(*(long *)
                          Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_1__ +
                        0xb8))[1] != '\0') {
      plVar9 = (long *)FUN_01f08890(*(undefined8 *)
                                     Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                    ,1);
      plVar10 = *(long **)(unaff_x19 + 0x38);
      if (plVar10 == (long *)0x0) goto LAB_03710c60;
      lVar7 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x22) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_03710bac;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar10,*unaff_x22,3);
LAB_03710bac:
      in_stack_00000008._4_4_ = (*(code *)*puVar3)(plVar10,puVar3[1]);
      lVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,(long)&stack0x00000008 + 4);
      if (plVar9 == (long *)0x0) goto LAB_03710c60;
      if ((lVar7 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar9[4] = lVar7;
      thunk_FUN_01f51358(plVar9 + 4,lVar7);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403ec4c(*(undefined8 *)Method_Unity_VisualScripting_Unit_<>c_<Disconnect>b__69_0__,plVar9
                   ,0);
    }
    if (*(long *)(unaff_x19 + 0x28) == 0) {
LAB_03710c60:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    FUN_04034704(*(long *)(unaff_x19 + 0x28),0);
  }
  return;
}


