/*
FUNCTION_NAME: FUN_0335e090
ENTRY_POINT: 0335e090
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;telemetry_or_network_hits_3
*/


void FUN_0335e090(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  
  if ((DAT_045334ec & 1) == 0) {
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__
                );
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Type>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Type>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_HashSet_Enumerator<Type>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Type>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Type>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Type>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TypeIdentifier>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIDocument>_Dispose__);
    FUN_01c5d288(PTR_DAT_04231378);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIDocument>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIDocument>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UITextDamage>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UITextDamage>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UITextDamage>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIVertex>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIVertex>_MoveNext__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UIVertex>_get_Current__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Unconsumed>_Dispose__);
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Unconsumed>_MoveNext__);
    DAT_045334ec = 1;
  }
  if (param_2 != 0) {
    uVar5 = FUN_0230bfc4(*(undefined8 *)(param_2 + 0xd8),
                         *(undefined8 *)
                          Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_MoveNext__
                        );
    puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<Type>_MoveNext__;
    puVar2 = Method_System_Collections_Generic_HashSet_Enumerator<Type>_Dispose__;
    puVar1 = Method_System_Collections_Generic_List_Enumerator<TriangulationPoint>_get_Current__;
    if ((uVar5 & 1) != 0) {
LAB_0335e1f0:
      if (*(char *)(param_2 + 200) != '\0') {
        if ((DAT_045334fd & 1) == 0) {
          FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<Unconsumed>_get_Current__);
          DAT_045334fd = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x1e8))
                  (param_1,*(undefined4 *)(param_2 + 0xcc),*(undefined8 *)(*param_1 + 0x1f0));
      }
      if (*(char *)(param_2 + 0xd0) != '\0') {
        if ((DAT_045334fe & 1) == 0) {
          FUN_01c5d288(
                      Method_System_Collections_Generic_List_Enumerator<UnityWebRequestAsyncOperation>_Dispose__
                      );
          DAT_045334fe = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x298))
                  (param_1,*(undefined4 *)(param_2 + 0xd4),*(undefined8 *)(*param_1 + 0x2a0));
      }
      if (*(char *)(param_2 + 0x6c) != '\0') {
        if ((DAT_045334ff & 1) == 0) {
          FUN_01c5d288(
                      Method_System_Collections_Generic_List_Enumerator<UnityWebRequestAsyncOperation>_MoveNext__
                      );
          DAT_045334ff = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x1f8))
                  (param_1,*(undefined4 *)(param_2 + 0x70),*(undefined8 *)(*param_1 + 0x200));
      }
      if (*(char *)(param_2 + 0x7c) != '\0') {
        if ((DAT_045334fc & 1) == 0) {
          FUN_01c5d288(
                      Method_System_Collections_Generic_List_Enumerator<UnityWebRequestAsyncOperation>_get_Current__
                      );
          DAT_045334fc = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x208))
                  (param_1,*(undefined4 *)(param_2 + 0x80),*(undefined8 *)(*param_1 + 0x210));
      }
      if (*(char *)(param_2 + 0x9c) != '\0') {
        if ((DAT_045334f5 & 1) == 0) {
          FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_Dispose__)
          ;
          DAT_045334f5 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x218))
                  (param_1,*(undefined4 *)(param_2 + 0xa0),*(undefined8 *)(*param_1 + 0x220));
      }
      if (*(char *)(param_2 + 0x94) != '\0') {
        if ((DAT_045334f6 & 1) == 0) {
          FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_MoveNext__
                      );
          DAT_045334f6 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x228))
                  (param_1,*(undefined4 *)(param_2 + 0x98),*(undefined8 *)(*param_1 + 0x230));
      }
      if (*(char *)(param_2 + 0x8c) != '\0') {
        if ((DAT_045334f8 & 1) == 0) {
          FUN_01c5d288(
                      Method_System_Collections_Generic_List_Enumerator<UxmlObjectAsset>_get_Current__
                      );
          DAT_045334f8 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x268))
                  (param_1,*(undefined4 *)(param_2 + 0x90),*(undefined8 *)(*param_1 + 0x270));
      }
      if (*(char *)(param_2 + 0x84) != '\0') {
        if ((DAT_045334f9 & 1) == 0) {
          FUN_01c5d288(Method_Unity_Collections_NativeArray_Enumerator<Vector2>_Dispose__);
          DAT_045334f9 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x248))
                  (param_1,*(undefined4 *)(param_2 + 0x88),*(undefined8 *)(*param_1 + 0x250));
      }
      if (*(char *)(param_2 + 0x74) != '\0') {
        if ((DAT_045334fb & 1) == 0) {
          FUN_01c5d288(Method_Unity_Collections_NativeArray_Enumerator<Vector2>_MoveNext__);
          DAT_045334fb = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 600))
                  (param_1,*(undefined4 *)(param_2 + 0x78),*(undefined8 *)(*param_1 + 0x260));
      }
      if (*(char *)(param_2 + 0xc0) != '\0') {
        if ((DAT_04533500 & 1) == 0) {
          FUN_01c5d288(Method_Unity_Collections_NativeArray_Enumerator<Vector2>_get_Current__);
          DAT_04533500 = 1;
        }
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x278))
                  (param_1,*(undefined4 *)(param_2 + 0xc4),*(undefined8 *)(*param_1 + 0x280));
      }
      if (*(char *)(param_2 + 0xa8) != '\0') {
        auVar13 = FUN_0335eaac(param_2);
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x2e8))
                  (param_1,auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(*param_1 + 0x2f0));
      }
      if (*(char *)(param_2 + 0x50) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        *(undefined2 *)((long)param_1 + 0xc1) = *(undefined2 *)(param_2 + 0x50);
      }
      if (*(long *)(param_2 + 0x108) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x178))
                  (param_1,*(long *)(param_2 + 0x108),*(undefined8 *)(*param_1 + 0x180));
      }
      if (*(long *)(param_2 + 0xe0) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x2c8))
                  (param_1,*(long *)(param_2 + 0xe0),*(undefined8 *)(*param_1 + 0x2d0));
      }
      lVar8 = *(long *)(param_2 + 0xf0);
      if (lVar8 != 0) {
        uVar6 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x198))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x1a0));
      }
      if (*(long *)(param_2 + 0xf8) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x1c8))
                  (param_1,*(long *)(param_2 + 0xf8),*(undefined8 *)(*param_1 + 0x1d0));
      }
      if (*(long *)(param_2 + 0xe8) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x1d8))
                  (param_1,*(long *)(param_2 + 0xe8),*(undefined8 *)(*param_1 + 0x1e0));
      }
      if (*(long *)(param_2 + 0x100) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        (**(code **)(*param_1 + 0x1a8))
                  (param_1,*(long *)(param_2 + 0x100),*(undefined8 *)(*param_1 + 0x1b0));
      }
      if (*(char *)(param_2 + 0x10) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0xf] = *(long *)(param_2 + 0x10);
      }
      if (*(char *)(param_2 + 0x18) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x10] = *(long *)(param_2 + 0x18);
      }
      if (*(char *)(param_2 + 0x20) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x11] = *(long *)(param_2 + 0x20);
      }
      if (*(char *)(param_2 + 0x28) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x12] = *(long *)(param_2 + 0x28);
      }
      if (*(char *)(param_2 + 0x68) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        lVar8 = *(long *)(param_2 + 0x60);
        *(char *)(param_1 + 0x1a) = *(char *)(param_2 + 0x68);
        param_1[0x19] = lVar8;
      }
      if (*(char *)(param_2 + 0x30) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x13] = *(long *)(param_2 + 0x30);
      }
      if (*(char *)(param_2 + 0x38) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x14] = *(long *)(param_2 + 0x38);
      }
      if (*(char *)(param_2 + 0x40) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x15] = *(long *)(param_2 + 0x40);
      }
      if (*(long *)(param_2 + 0x48) != 0) {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x16] = *(long *)(param_2 + 0x48);
      }
      if (*(char *)(param_2 + 0x5c) != '\0') {
        if (param_1 == (long *)0x0) goto LAB_0335e7ac;
        param_1[0x17] = *(long *)(param_2 + 0x54);
        *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x5c);
      }
      return;
    }
    plVar12 = *(long **)(param_2 + 0xd8);
    if (plVar12 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar8 = *plVar12;
        uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0335e6f4;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar2,0);
LAB_0335e6f4:
        iVar4 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        if (iVar4 <= iVar11) goto LAB_0335e1f0;
        if (param_1 == (long *)0x0) break;
        lVar8 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
        plVar12 = *(long **)(param_2 + 0xd8);
        if (plVar12 == (long *)0x0) break;
        lVar9 = *plVar12;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0335e778;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar7 = (undefined8 *)FUN_01c72498(plVar12,*(long *)puVar3,0);
LAB_0335e778:
        uVar6 = (*(code *)*puVar7)(plVar12,iVar11,puVar7[1]);
        if (lVar8 == 0) break;
        FUN_027bd930(lVar8,iVar11,uVar6,*(undefined8 *)puVar1);
        plVar12 = *(long **)(param_2 + 0xd8);
        iVar11 = iVar11 + 1;
      } while (plVar12 != (long *)0x0);
    }
  }
LAB_0335e7ac:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


