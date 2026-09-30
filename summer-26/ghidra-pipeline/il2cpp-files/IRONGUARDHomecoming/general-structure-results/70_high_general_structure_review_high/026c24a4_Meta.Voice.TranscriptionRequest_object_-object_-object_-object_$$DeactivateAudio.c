/*
FUNCTION_NAME: Meta.Voice.TranscriptionRequest<object,-object,-object,-object>$$DeactivateAudio
ENTRY_POINT: 026c24a4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Meta_Voice_TranscriptionRequest<object,_object,_object,_object>__DeactivateAudio(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  
  lVar2 = thunk_FUN_01f116d0();
  if (lVar2 == 0) {
    plVar9 = (long *)thunk_FUN_01ecaf38();
    if (plVar9 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x438))(plVar9,*(undefined8 *)(*plVar9 + 0x440));
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0)
      {
        thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
      }
      plVar4 = (long *)FUN_03579868(uVar11,0);
      if (plVar9 != (long *)0x0) {
        uVar7 = (**(code **)(*plVar9 + 0x2a8))(plVar9,plVar4,*(undefined8 *)(*plVar9 + 0x2b0));
        if ((uVar7 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_026c27c4;
          uVar7 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar9,*(undefined8 *)(*plVar4 + 0x2b0));
          if ((uVar7 & 1) == 0) {
            FUN_0358ba14(0);
          }
        }
        plVar9 = (long *)thunk_FUN_01f116d0();
        if (plVar9 == (long *)0x0) {
          FUN_0358ba14();
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        if (plVar4 != (long *)0x0) {
          lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01ecaf44(lVar2);
          }
          lVar5 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == lVar2) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_026c2688;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar2,0);
LAB_026c2688:
          iVar1 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (0 < iVar1) {
            iVar10 = 0;
            do {
              plVar4 = *(long **)(unaff_x21 + 0x10);
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar2 = **(long **)(*(long *)(unaff_x20 + 0x20) + 0xc0);
              if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_01ecaf44(lVar2);
              }
              lVar5 = *plVar4;
              uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == lVar2) {
                    puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_026c2714;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar2,0);
LAB_026c2714:
              (*(code *)*puVar3)(plVar4,iVar10,puVar3[1]);
              lVar2 = thunk_FUN_01f113fc(*(undefined8 *)
                                          (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28));
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              if ((lVar2 != 0) &&
                 (lVar5 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar9 + 0x40)), lVar5 == 0)) {
                uVar11 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar11,0);
              }
              if (*(uint *)(plVar9 + 3) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              plVar9[(long)(int)unaff_w19 + 4] = lVar2;
              thunk_FUN_01f51358(plVar9 + (long)(int)unaff_w19 + 4,lVar2);
              iVar10 = iVar10 + 1;
              unaff_w19 = unaff_w19 + 1;
            } while (iVar10 != iVar1);
          }
          return;
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x21 + 0x10);
    if (plVar9 != (long *)0x0) {
      lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01ecaf44(lVar5);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar5) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
            goto LAB_026c2654;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(plVar9,lVar5,5);
LAB_026c2654:
                    /* WARNING: Could not recover jumptable at 0x026c2678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar9,lVar2,unaff_w19,puVar3[1]);
      return;
    }
  }
LAB_026c27c4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


