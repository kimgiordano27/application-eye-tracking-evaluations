/*
FUNCTION_NAME: Meta.Voice.TranscriptionRequest<object,-object,-object,-object>$$OnAudioDeactivation
ENTRY_POINT: 026c252c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Meta_Voice_TranscriptionRequest<object,_object,_object,_object>__OnAudioDeactivation
               (long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  int iVar9;
  undefined8 uVar10;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x438))(param_1,*(undefined8 *)(*param_1 + 0x440));
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  plVar3 = (long *)FUN_03579868(uVar10,0);
  if (plVar2 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0x2a8))(plVar2,plVar3,*(undefined8 *)(*plVar2 + 0x2b0));
    if ((uVar4 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_026c27c4;
      uVar4 = (**(code **)(*plVar3 + 0x2a8))(plVar3,plVar2,*(undefined8 *)(*plVar3 + 0x2b0));
      if ((uVar4 & 1) == 0) {
        FUN_0358ba14(0);
      }
    }
    plVar2 = (long *)thunk_FUN_01f116d0();
    if (plVar2 == (long *)0x0) {
      FUN_0358ba14();
    }
    plVar3 = *(long **)(unaff_x21 + 0x10);
    if (plVar3 != (long *)0x0) {
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ecaf44(lVar6);
      }
      lVar7 = *plVar3;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_026c2688;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_026c2688:
      iVar1 = (*(code *)*puVar5)(plVar3,puVar5[1]);
      if (0 < iVar1) {
        iVar9 = 0;
        do {
          plVar3 = *(long **)(unaff_x21 + 0x10);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar6 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ecaf44(lVar6);
          }
          lVar7 = *plVar3;
          uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar4 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar6) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_026c2714;
              }
              uVar4 = uVar4 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar3,lVar6,0);
LAB_026c2714:
          (*(code *)*puVar5)(plVar3,iVar9,puVar5[1]);
          lVar6 = thunk_FUN_01f113fc(*(undefined8 *)
                                      (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_01f116d0(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar7 == 0)) {
            uVar10 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar10,0);
          }
          if (*(uint *)(plVar2 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          plVar2[(long)(int)unaff_w19 + 4] = lVar6;
          thunk_FUN_01f51358(plVar2 + (long)(int)unaff_w19 + 4,lVar6);
          iVar9 = iVar9 + 1;
          unaff_w19 = unaff_w19 + 1;
        } while (iVar9 != iVar1);
      }
      return;
    }
  }
LAB_026c27c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


