/*
FUNCTION_NAME: Sirenix.OdinInspector.SelfValidationResultItemExtensions$$WithFix
ENTRY_POINT: 037d5304
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_6;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x037d5544) */
/* WARNING: Removing unreachable block (ram,0x037d55f0) */

undefined4 Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithFix(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 unaff_w23;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0xe08));
  *(undefined1 *)(unaff_x20 + 0x6de) = 1;
  if (unaff_x22 != 0) {
    FUN_03413840();
    FUN_0341265c();
    uVar3 = FUN_037d4d78();
    puVar2 = Method_System_Collections_Generic_Stack<Tween>_Pop__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    if (unaff_x21 != 0) {
      if ((int)*(ulong *)(unaff_x21 + 0x18) < 1) {
        return unaff_w23;
      }
      uVar9 = 0;
      uVar6 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
      iVar11 = 2;
      uStack000000000000000c = unaff_w23;
LAB_037d5370:
      if (uVar6 <= uVar9) goto LAB_037d55ec;
      plVar4 = (long *)FUN_022fa0b4(uVar3,*(undefined8 *)(unaff_x21 + uVar9 * 8 + 0x20),
                                    *(undefined8 *)StringLiteral_1223);
      if (plVar4 != (long *)0x0) {
        lVar7 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) ==
                *(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_037d53f0;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_01ecb238(plVar4,*(long *)Method_System_Collections_Generic_Stack<Tween>_Clear__
                              ,0);
LAB_037d53f0:
        plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        iVar10 = 0;
        do {
          lVar7 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_037d5454;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_037d5454:
          uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if ((uVar6 & 1) == 0) goto LAB_037d54cc;
          lVar7 = *plVar4;
          uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar6 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick;
              }
              uVar6 = uVar6 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar6 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar2,0);
Sirenix_OdinInspector_SelfValidationResultItemExtensions__WithContextClick:
          lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar10 = *(int *)(lVar7 + 0x10) + iVar10;
        } while( true );
      }
    }
  }
LAB_037d55e8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_037d54cc:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_037d552c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_037d552c:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  if (iVar11 < iVar10) {
    if (unaff_x19 == 0) goto LAB_037d55e8;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar9) {
LAB_037d55ec:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + uVar9 * 4 + 0x20);
    iVar11 = iVar10;
  }
  uVar6 = (ulong)*(uint *)(unaff_x21 + 0x18);
  uVar9 = uVar9 + 1;
  if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)uVar9) {
    return uStack000000000000000c;
  }
  goto LAB_037d5370;
}


