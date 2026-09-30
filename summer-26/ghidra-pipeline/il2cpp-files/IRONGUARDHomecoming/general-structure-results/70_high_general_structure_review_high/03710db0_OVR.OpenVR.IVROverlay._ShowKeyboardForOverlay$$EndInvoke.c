/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._ShowKeyboardForOverlay$$EndInvoke
ENTRY_POINT: 03710db0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVROverlay__ShowKeyboardForOverlay__EndInvoke(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  
  puVar3 = Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_4__;
  if ((*(long *)(unaff_x19 + 0x20) != 0) &&
     (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x38), plVar13 != (long *)0x0)) {
    lVar8 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) ==
            *(long *)Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_4__) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_03710e18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar13,*(long *)
                                   Method_UnityEngine_UIElements_UIEventRegistration_<>c_<_cctor>b__1_4__
                          ,3);
LAB_03710e18:
    uVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if ((int)uVar4 < (int)unaff_w22) {
      if (*(char *)(*(long *)(*(long *)
                               Method_UnityEngine_UIElements_UIR_UIRenderDevice_<>c_<_ctor>b__50_1__
                             + 0xb8) + 4) == '\0') {
        return;
      }
      plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,2);
      puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      uStack000000000000000c = unaff_w22;
      lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,(long)&stack0x00000008 + 4);
      if (plVar13 != (long *)0x0) {
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0)) {
LAB_0371120c:
          uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,0);
        }
        if ((int)plVar13[3] != 0) {
          plVar13[4] = lVar8;
          thunk_FUN_01f51358(plVar13 + 4,lVar8);
          uStack0000000000000008 = uVar4;
          lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
          if ((lVar8 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
          goto LAB_0371120c;
          if (1 < *(uint *)(plVar13 + 3)) {
            plVar13[5] = lVar8;
            thunk_FUN_01f51358(plVar13 + 5,lVar8);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403ec4c(*(undefined8 *)Method_Unity_VisualScripting_Unit_<>c_<Disconnect>b__69_1__,
                         plVar13,0);
            return;
          }
        }
LAB_03711148:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
    }
    else if ((*(long *)(unaff_x19 + 0x20) != 0) &&
            (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x20) + 0x38), plVar13 != (long *)0x0)) {
      lVar8 = *plVar13;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x28);
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_03710f8c;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar13,*(long *)puVar3,0);
LAB_03710f8c:
      uVar4 = (*(code *)*puVar5)(plVar13,uVar7,unaff_w22,puVar5[1]);
      if ((int)uVar4 < (int)unaff_w22) {
        plVar13 = (long *)FUN_01f08890(*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       ,2);
        puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
        uStack000000000000000c = uVar4;
        lVar8 = thunk_FUN_01f113fc(*(undefined8 *)
                                    Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                   ,(long)&stack0x00000008 + 4);
        if (plVar13 != (long *)0x0) {
          if ((lVar8 == 0) ||
             (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar6 != 0)) {
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar8;
              thunk_FUN_01f51358(plVar13 + 4,lVar8);
              uStack0000000000000008 = unaff_w22;
              lVar8 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
              if ((lVar8 != 0) &&
                 (lVar6 = thunk_FUN_01f116d0(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar6 == 0))
              goto LAB_0371120c;
              if (1 < *(uint *)(plVar13 + 3)) {
                plVar13[5] = lVar8;
                thunk_FUN_01f51358(plVar13 + 5,lVar8);
                if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0)
                    == 0) {
                  thunk_FUN_01ee6d7c();
                }
                FUN_0403f4ec(*(undefined8 *)
                              Method_Unity_VisualScripting_Unit_<>c_<RemoveUnconnectedInvalidPorts>b__22_0__
                             ,plVar13,0);
                return;
              }
            }
            goto LAB_03711148;
          }
          goto LAB_0371120c;
        }
      }
      else {
        if ((int)unaff_w22 < 1) {
          fVar15 = -1.0;
        }
        else {
          lVar8 = *(long *)(unaff_x19 + 0x28);
          if (lVar8 == 0) goto LAB_0371114c;
          uVar4 = *(uint *)(lVar8 + 0x18);
          uVar9 = 0;
          uVar11 = 0;
          fVar14 = -1.0;
          do {
            if (uVar4 <= uVar9) goto LAB_03711148;
            fVar15 = fVar14;
            if (0 < unaff_w21) {
              fVar16 = *(float *)(lVar8 + uVar9 * 4 + 0x20);
              iVar12 = 0;
              iVar2 = unaff_w21;
              if (uVar11 <= *(uint *)(unaff_x20 + 0x18)) {
                iVar12 = *(uint *)(unaff_x20 + 0x18) - uVar11;
              }
              do {
                if (iVar12 == 0) goto LAB_03711148;
                uVar1 = uVar11 + 1;
                *(float *)(unaff_x20 + (long)(int)uVar11 * 4 + 0x20) = fVar16;
                fVar15 = fVar16;
                if (fVar16 <= fVar14) {
                  fVar15 = fVar14;
                }
                iVar2 = iVar2 + -1;
                fVar14 = fVar15;
                uVar11 = uVar1;
                iVar12 = iVar12 + -1;
              } while (iVar2 != 0);
            }
            uVar9 = uVar9 + 1;
            fVar14 = fVar15;
          } while (uVar9 != unaff_w22);
        }
        if (*(long *)(unaff_x19 + 0x20) != 0) {
          *(float *)(*(long *)(unaff_x19 + 0x20) + 0x30) = fVar15;
          return;
        }
      }
    }
  }
LAB_0371114c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


