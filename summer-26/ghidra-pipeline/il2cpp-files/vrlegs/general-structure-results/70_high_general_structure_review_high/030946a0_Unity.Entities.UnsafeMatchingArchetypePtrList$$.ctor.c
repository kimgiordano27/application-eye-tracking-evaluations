/*
FUNCTION_NAME: Unity.Entities.UnsafeMatchingArchetypePtrList$$.ctor
ENTRY_POINT: 030946a0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_8;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03094af4) */

void Unity_Entities_UnsafeMatchingArchetypePtrList___ctor
               (long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uStack0000000000000000;
  long in_stack_00000008;
  
  uStack0000000000000000 = param_3;
  if ((*(byte *)(unaff_x20 + 0x50e) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cbf5c8);
    FUN_01ab69ac(
                Unity_Entities_EntityPatcher_ApplyRemoveComponents_00000330_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(
                Unity_Entities_EntityPatcher_ApplyUnmanagedEntityPatches_00000334_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cbf4f8);
    FUN_01ab69ac(PTR_DAT_03cbf500);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(System_Xml_Serialization_EnumMap_EnumMapMember_var);
    FUN_01ab69ac(Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise_var);
    FUN_01ab69ac(
                Unity_Physics_Systems_ExportPhysicsWorld___codegen__OnCreate_00000B07_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(PTR_DAT_03cbdf88);
    FUN_01ab69ac(
                Unity_Physics_Systems_ExportPhysicsWorld___codegen__OnUpdate_00000B08_PostfixBurstDelegate_var
                );
    FUN_01ab69ac(Unity_Entities_FastEquality_CompareImpl<T>_var);
    *(undefined1 *)(unaff_x20 + 0x50e) = 1;
  }
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    lVar11 = *(long *)Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise_var;
    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
    uVar7 = FUN_01ab7534(*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 200));
    if ((uVar7 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar13 + 0x18);
      *(undefined4 *)(lVar13 + 0x18) = 0;
      if (0 < iVar1) {
        FUN_02793a34(*(undefined8 *)(lVar13 + 0x10),0,iVar1,0);
      }
    }
    if (param_2 != (long *)0x0) {
      lVar13 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar7 != 0) {
        piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbf4f8) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0309480c;
          }
          uVar7 = uVar7 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(param_2,*(long *)PTR_DAT_03cbf4f8,0);
LAB_0309480c:
      plVar9 = (long *)(*(code *)*puVar8)(param_2,puVar8[1]);
      puVar6 = Unity_Entities_FastEquality_CompareImpl<T>_var;
      puVar5 = PTR_DAT_03cbf5c8;
      puVar4 = PTR_DAT_03cbf500;
      puVar3 = PTR_DAT_03cbed20;
      puVar2 = PTR_DAT_03cbdf88;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      do {
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03094894;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar3,0);
LAB_03094894:
        uVar7 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        if ((uVar7 & 1) == 0) {
          if (plVar9 == (long *)0x0) {
            return;
          }
          lVar13 = *plVar9;
          uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar7 == 0) goto LAB_03094a8c;
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_03094a74;
        }
        lVar13 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar7 != 0) {
          piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_030948f0;
            }
            uVar7 = uVar7 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)puVar4,0);
LAB_030948f0:
        lVar13 = (*(code *)*puVar8)(plVar9,puVar8[1]);
        lVar11 = thunk_FUN_01a89e68(*(undefined8 *)puVar6);
        FUN_027b3d9c(lVar11,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        FUN_01f49730(lVar13,&stack0x00000008,*(undefined8 *)puVar5);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        plVar14 = (long *)(lVar11 + 0x10);
        *plVar14 = in_stack_00000008;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar14);
        lVar13 = *plVar14;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar7 = FUN_036d35a8(lVar13,0,0);
        if ((uVar7 & 1) == 0) {
          if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01ab6c3c();
          }
          uVar7 = FUN_03692bc0(*plVar14,0);
          if ((uVar7 & 1) != 0) {
            uVar15 = *(undefined8 *)(param_1 + 0x10);
            uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                         Unity_Entities_EntityPatcher_ApplyUnmanagedEntityPatches_00000334_PostfixBurstDelegate_var
                                       );
            FUN_021de1ac(uVar10,lVar11,
                         *(undefined8 *)
                          Unity_Physics_Systems_ExportPhysicsWorld___codegen__OnUpdate_00000B08_PostfixBurstDelegate_var
                         ,0);
            FUN_01f68788(uVar15,uVar10,&stack0x00000008,
                         *(undefined8 *)
                          Unity_Entities_EntityPatcher_ApplyRemoveComponents_00000330_PostfixBurstDelegate_var
                        );
            lVar13 = *plVar14;
            if (in_stack_00000008 == 0) {
              lVar11 = thunk_FUN_01a89e68(*(undefined8 *)
                                           Unity_Physics_Systems_ExportPhysicsWorld___codegen__OnCreate_00000B07_PostfixBurstDelegate_var
                                         );
              FUN_030939cc(lVar11,lVar13,uStack0000000000000000);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
              uVar10 = *(undefined8 *)(lVar11 + 0x10);
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01a58e78();
              }
              uVar7 = FUN_036cee6c(uVar10,0,0);
              if ((uVar7 & 1) != 0) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01ab6c3c();
                }
                FUN_01b5f01c(*(long *)(param_1 + 0x10),lVar11,
                             *(undefined8 *)System_Xml_Serialization_EnumMap_EnumMapMember_var);
              }
            }
            else {
              FUN_03093cd8(in_stack_00000008,lVar13);
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar12 = piVar12 + 4;
    if (uVar7 == 0) break;
LAB_03094a74:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed08) {
      puVar8 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03094aa8;
    }
  }
LAB_03094a8c:
  puVar8 = (undefined8 *)FUN_01a472ec(plVar9,*(long *)PTR_DAT_03cbed08,0);
LAB_03094aa8:
  (*(code *)*puVar8)(plVar9,puVar8[1]);
  return;
}


