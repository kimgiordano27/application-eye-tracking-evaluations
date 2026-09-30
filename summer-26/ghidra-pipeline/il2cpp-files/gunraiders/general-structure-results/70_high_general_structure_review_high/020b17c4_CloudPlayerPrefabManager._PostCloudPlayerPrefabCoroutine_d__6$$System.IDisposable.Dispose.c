/*
FUNCTION_NAME: CloudPlayerPrefabManager.<PostCloudPlayerPrefabCoroutine>d__6$$System.IDisposable.Dispose
ENTRY_POINT: 020b17c4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x020b1c98) */

void CloudPlayerPrefabManager_<PostCloudPlayerPrefabCoroutine>d__6__System_IDisposable_Dispose(void)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint in_w8;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  puVar15 = *(undefined8 **)(unaff_x29 + 0x88);
  uVar12 = 0;
  uVar14 = 1;
  while( true ) {
    if (in_w8 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar13 = *(long *)(unaff_x19 + (long)(int)uVar12 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_0422fa10 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar3 = FUN_032506a4(uVar14 & in_stack_00000008._4_4_,0);
    if (lVar13 == 0) break;
    lVar4 = FUN_03d468ac(lVar13,0);
    if (lVar4 == 0) break;
    plVar5 = (long *)FUN_03d5845c(lVar4,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
LAB_020b1840:
    lVar4 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_020b188c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01c72498(plVar5,*unaff_x26,0);
LAB_020b188c:
    uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar10 & 1) != 0) {
      lVar4 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x26) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_020b18ec;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*unaff_x26,1);
LAB_020b18ec:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      bVar2 = *(byte *)(*unaff_x27 + 0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *unaff_x27)) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748(plVar7);
      }
      uVar8 = FUN_03d4ded0(plVar7,0);
      uVar10 = thunk_FUN_03152714(uVar8,*unaff_x20,0);
      if ((uVar10 & 1) != 0) {
        lVar4 = FUN_03d468e8(plVar7,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03d499ec(lVar4,uVar3 & 1,0);
      }
      uVar8 = FUN_03d4ded0(plVar7,0);
      uVar10 = thunk_FUN_03152714(uVar8,*unaff_x28,0);
      if ((uVar10 & 1) != 0) {
        lVar4 = FUN_03d468e8(plVar7,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03d499ec(lVar4,(uVar3 ^ 1) & 1,0);
      }
      uVar8 = FUN_03d4ded0(plVar7,0);
      uVar10 = thunk_FUN_03152714(uVar8,*puVar15,0);
      if ((uVar10 & 1) != 0) {
        lVar4 = FUN_03d468e8(plVar7,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01c5d4a4();
        }
        FUN_03d499ec(lVar4,uVar3 & 1,0);
        if ((uVar3 & 1) != 0) {
          lVar4 = FUN_0230c12c(plVar7,*(undefined8 *)
                                       System_Collections_Generic_List<SerializationFieldInfo>_TypeInfo
                              );
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar1 = *(undefined4 *)(lVar4 + 0x38);
          lVar4 = *(long *)PTR_DAT_04239470;
          if (*(int *)(lVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
            lVar4 = *(long *)PTR_DAT_04239470;
          }
          if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar8 = FUN_01f03174(**(long **)(lVar4 + 0xb8),
                               *(undefined8 *)
                                System_Action<AsyncLocalValueChangedArgs<CultureInfo>>_TypeInfo,
                               uVar1,0);
          uVar8 = FUN_03d43cb8(uVar8,*(undefined8 *)System_Data_DataColumn_var,0);
          if (**(long **)(*(long *)PTR_DAT_04239470 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar9 = FUN_01f03174(**(long **)(*(long *)PTR_DAT_04239470 + 0xb8),
                               *(undefined8 *)
                                System_Action<AsyncOperationHandle<IResourceLocator>>_TypeInfo,uVar1
                               ,0);
          auVar16 = FUN_03d43a80(uVar9,0x84,0);
          if (*(long *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4();
          }
          uVar10 = auVar16._0_8_ & 0xffffffff;
          if (*(long *)(in_stack_00000018 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d4a4(0,auVar16._8_8_,uVar10);
          }
          uVar8 = FUN_02096c00(*(long *)(in_stack_00000018 + 0x20),uVar8,uVar10,
                               *(undefined8 *)(*(long *)(lVar13 + 0x28) + 0x30),0);
          FUN_03d4b1bc(in_stack_00000018,uVar8,0);
        }
      }
      goto LAB_020b1840;
    }
    plVar5 = (long *)thunk_FUN_01c495e4(plVar5,*(undefined8 *)PTR_DAT_0422fce8);
    if (plVar5 != (long *)0x0) {
      lVar13 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0422fce8) {
            puVar6 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_020b1b44;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01c72498(plVar5,*(long *)PTR_DAT_0422fce8,0);
LAB_020b1b44:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    uVar12 = uVar12 + 1;
    uVar14 = uVar14 << 1;
    if ((int)in_w8 <= (int)uVar12) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


