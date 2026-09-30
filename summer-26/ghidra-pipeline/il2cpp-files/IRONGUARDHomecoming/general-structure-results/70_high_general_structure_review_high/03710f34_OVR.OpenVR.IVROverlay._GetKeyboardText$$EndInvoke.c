/*
FUNCTION_NAME: OVR.OpenVR.IVROverlay._GetKeyboardText$$EndInvoke
ENTRY_POINT: 03710f34
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void OVR_OpenVR_IVROverlay__GetKeyboardText__EndInvoke(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  uint unaff_w22;
  long *plVar12;
  undefined8 uVar13;
  long *unaff_x25;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  plVar12 = *(long **)(param_1 + 0x38);
  if (plVar12 != (long *)0x0) {
    lVar7 = *plVar12;
    uVar13 = *(undefined8 *)(unaff_x19 + 0x28);
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03710f8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(plVar12,*unaff_x25,0);
LAB_03710f8c:
    iVar4 = (*(code *)*puVar5)(plVar12,uVar13,unaff_w22,puVar5[1]);
    if (iVar4 < (int)unaff_w22) {
      plVar12 = (long *)FUN_01f08890(*(undefined8 *)
                                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     ,2);
      puVar3 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
      iStack000000000000000c = iVar4;
      lVar7 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,(long)&stack0x00000008 + 4);
      if (plVar12 != (long *)0x0) {
        if ((lVar7 != 0) &&
           (lVar6 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0)) {
LAB_0371120c:
          uVar13 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar13,0);
        }
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar7;
          thunk_FUN_01f51358(plVar12 + 4,lVar7);
          uStack0000000000000008 = unaff_w22;
          lVar7 = thunk_FUN_01f113fc(*(undefined8 *)puVar3,&stack0x00000008);
          if ((lVar7 != 0) &&
             (lVar6 = thunk_FUN_01f116d0(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar6 == 0))
          goto LAB_0371120c;
          if (1 < *(uint *)(plVar12 + 3)) {
            plVar12[5] = lVar7;
            thunk_FUN_01f51358(plVar12 + 5,lVar7);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0)
            {
              thunk_FUN_01ee6d7c();
            }
            FUN_0403f4ec(*(undefined8 *)
                          Method_Unity_VisualScripting_Unit_<>c_<RemoveUnconnectedInvalidPorts>b__22_0__
                         ,plVar12,0);
            return;
          }
        }
LAB_03711148:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
    }
    else {
      if ((int)unaff_w22 < 1) {
        fVar15 = -1.0;
      }
      else {
        lVar7 = *(long *)(unaff_x19 + 0x28);
        if (lVar7 == 0) goto LAB_0371114c;
        uVar2 = *(uint *)(lVar7 + 0x18);
        uVar8 = 0;
        uVar10 = 0;
        fVar14 = -1.0;
        do {
          if (uVar2 <= uVar8) goto LAB_03711148;
          fVar15 = fVar14;
          if (0 < unaff_w21) {
            fVar16 = *(float *)(lVar7 + uVar8 * 4 + 0x20);
            iVar11 = 0;
            iVar4 = unaff_w21;
            if (uVar10 <= *(uint *)(unaff_x20 + 0x18)) {
              iVar11 = *(uint *)(unaff_x20 + 0x18) - uVar10;
            }
            do {
              if (iVar11 == 0) goto LAB_03711148;
              uVar1 = uVar10 + 1;
              *(float *)(unaff_x20 + (long)(int)uVar10 * 4 + 0x20) = fVar16;
              fVar15 = fVar16;
              if (fVar16 <= fVar14) {
                fVar15 = fVar14;
              }
              iVar4 = iVar4 + -1;
              fVar14 = fVar15;
              uVar10 = uVar1;
              iVar11 = iVar11 + -1;
            } while (iVar4 != 0);
          }
          uVar8 = uVar8 + 1;
          fVar14 = fVar15;
        } while (uVar8 != unaff_w22);
      }
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        *(float *)(*(long *)(unaff_x19 + 0x20) + 0x30) = fVar15;
        return;
      }
    }
  }
LAB_0371114c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


