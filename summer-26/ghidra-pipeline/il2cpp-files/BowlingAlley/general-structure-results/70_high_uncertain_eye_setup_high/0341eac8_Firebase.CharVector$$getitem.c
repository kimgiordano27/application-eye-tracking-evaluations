/*
FUNCTION_NAME: Firebase.CharVector$$getitem
ENTRY_POINT: 0341eac8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0341f00c) */
/* WARNING: Removing unreachable block (ram,0x0341f144) */

void Firebase_CharVector__getitem(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 in_stack_00000018;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x810));
  thunk_FUN_032e1da0(PTR_DAT_0727a818);
  thunk_FUN_032e1da0(PTR_DAT_0727a190);
  thunk_FUN_032e1da0(PTR_DAT_0727a820);
  thunk_FUN_032e1da0(PTR_DAT_0727a828);
  thunk_FUN_032e1da0(PTR_DAT_0727a198);
  thunk_FUN_032e1da0(PTR_DAT_0727a830);
  thunk_FUN_032e1da0(PTR_DAT_0727a838);
  *(undefined1 *)(unaff_x19 + 0xebd) = 1;
  in_stack_00000018 = 0;
  if (unaff_x20 != (long *)0x0) {
    uVar11 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar11 & 1) == 0) {
      lVar14 = (**(code **)(*unaff_x20 + 0x4f8))();
      if (lVar14 != 0) {
        plVar12 = (long *)FUN_04efafb4(lVar14,*(undefined8 *)PTR_DAT_0727a170);
        puVar9 = PTR_DAT_0727a808;
        puVar8 = PTR_DAT_0727a198;
        puVar7 = PTR_DAT_0727a190;
        puVar6 = PTR_DAT_0727a180;
        puVar5 = PTR_DAT_0727a178;
        puVar4 = PTR_DAT_0727a168;
        puVar3 = PTR_DAT_072798f8;
        bVar2 = false;
        do {
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
LAB_0341ec20:
          do {
            lVar14 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar6) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0341ec6c;
                }
                uVar11 = uVar11 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar6,0);
LAB_0341ec6c:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if ((uVar11 & 1) == 0) {
              bVar1 = false;
LAB_0341ef98:
              if (plVar12 == (long *)0x0) goto LAB_0341f000;
              lVar14 = *plVar12;
              uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
              if (uVar11 == 0) goto LAB_0341efd8;
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              goto LAB_0341efc0;
            }
            lVar14 = *plVar12;
            uVar11 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar11 != 0) {
              piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
                  puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_0341ecc8;
                }
                uVar11 = uVar11 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar11 != 0);
            }
            puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)puVar5,0);
LAB_0341ecc8:
            lVar14 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar11 = FUN_057aa36c(*(long *)(lVar14 + 0x38),*(undefined8 *)puVar8,0);
            if ((uVar11 & 1) != 0) {
              lVar14 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727a7d8,2);
              puVar3 = PTR_DAT_0727a7e0;
              uVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a7e0);
              FUN_03505e54(uVar16,*(undefined8 *)PTR_DAT_0727a830,*(undefined8 *)PTR_DAT_0727a7e8,0)
              ;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              *(undefined8 *)(lVar14 + 0x20) = uVar16;
              thunk_FUN_0333a630((undefined8 *)(lVar14 + 0x20),uVar16);
              uVar16 = thunk_FUN_032a56a0(*(undefined8 *)puVar3);
              FUN_03505e54(uVar16,*(undefined8 *)PTR_DAT_0727a7f8,*(undefined8 *)PTR_DAT_0727a838,0)
              ;
              if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
                Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
              }
              *(undefined8 *)(lVar14 + 0x28) = uVar16;
              thunk_FUN_0333a630((undefined8 *)(lVar14 + 0x28),uVar16);
              if (*(int *)(*(long *)PTR_DAT_07279d08 + 0xe0) == 0) {
                thunk_FUN_032cd7c0();
              }
              FUN_03513684(*(undefined8 *)PTR_DAT_0727a820,lVar14,0);
              bVar1 = true;
              goto LAB_0341ef98;
            }
            if (*(long *)(lVar14 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_032d5ee8();
            }
            uVar11 = FUN_057aa36c(*(long *)(lVar14 + 0x38),*(undefined8 *)puVar7,0);
          } while ((uVar11 & 1) == 0);
          uVar16 = *(undefined8 *)(lVar14 + 0x18);
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          auVar17 = FUN_0590a980(uVar16,0);
          auVar18 = FUN_05907dc0(0);
          uVar11 = FUN_0590ab94(auVar17._0_8_,auVar17._8_8_,auVar18._0_8_,auVar18._8_8_,0);
          if ((uVar11 & 1) == 0) {
            if (*(int *)(*(long *)PTR_DAT_0727a7d0 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar16 = FUN_05905bd0(lVar14 + 0x18,0);
            uVar16 = FUN_057a19ac(*(undefined8 *)puVar9,uVar16,0);
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            FUN_06bb2f68(uVar16,0);
            goto LAB_0341ec20;
          }
          lVar14 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_0727a7d8,2);
          uVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a7e0);
          FUN_03505e54(uVar16,*(undefined8 *)PTR_DAT_0727a830,*(undefined8 *)PTR_DAT_0727a810,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          if (*(int *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          *(undefined8 *)(lVar14 + 0x20) = uVar16;
          thunk_FUN_0333a630((undefined8 *)(lVar14 + 0x20),uVar16);
          uVar16 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a7e0);
          FUN_03505e54(uVar16,*(undefined8 *)PTR_DAT_0727a7f8,*(undefined8 *)PTR_DAT_0727a828,0);
          if (*(uint *)(lVar14 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          *(undefined8 *)(lVar14 + 0x28) = uVar16;
          thunk_FUN_0333a630((undefined8 *)(lVar14 + 0x28),uVar16);
          if (*(int *)(*(long *)PTR_DAT_07279d08 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          bVar2 = true;
          FUN_03513684(*(undefined8 *)PTR_DAT_0727a820,lVar14,0);
        } while( true );
      }
    }
    else if (*(long *)(unaff_x21 + 0x48) != 0) {
      FUN_06be9a98(*(long *)(unaff_x21 + 0x48),1,0);
      plVar12 = *(long **)(unaff_x21 + 0x40);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x2a8))
                  (0x3f800000,DAT_0139fd8c,DAT_0139fee0,0x3f800000,plVar12,
                   *(undefined8 *)(*plVar12 + 0x2b0));
        plVar12 = *(long **)(unaff_x21 + 0x40);
        if (plVar12 != (long *)0x0) {
          lVar14 = *plVar12;
                    /* try { // try from 0341eb98 to 0351eb9f has its CatchHandler @ 0341ee18 */
          puVar13 = (undefined8 *)PTR_DAT_0727a7f0;
          goto LAB_0341eb9c;
        }
      }
    }
  }
  goto LAB_0341f13c;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar15 = piVar15 + 4;
    if (uVar11 == 0) break;
LAB_0341efc0:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_07279f60) {
      puVar13 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0341eff4;
    }
  }
LAB_0341efd8:
  puVar13 = (undefined8 *)FUN_032937ac(plVar12,*(long *)PTR_DAT_07279f60,0);
LAB_0341eff4:
  (*(code *)*puVar13)(plVar12,puVar13[1]);
LAB_0341f000:
  if (*(long *)(unaff_x21 + 0x48) != 0) {
    FUN_06be9a98(*(long *)(unaff_x21 + 0x48),1,0);
    plVar12 = *(long **)(unaff_x21 + 0x40);
    if (bVar1 || bVar2) {
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x2a8))
                  (0,0x3f800000,0,0x3f800000,plVar12,*(undefined8 *)(*plVar12 + 0x2b0));
        plVar12 = *(long **)(unaff_x21 + 0x40);
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x558))
                    (plVar12,*(undefined8 *)PTR_DAT_0727a800,*(undefined8 *)(*plVar12 + 0x560));
          lVar14 = *(long *)(unaff_x21 + 0x58);
          if (*(int *)(*(long *)PTR_DAT_0727a130 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          in_stack_00000018 = FUN_06bfc8dc(0);
          iVar10 = FUN_06bfc03c(&stack0x00000018,0);
          if (lVar14 != 0) {
            FUN_033c1520(lVar14,iVar10 + 1,0);
            return;
          }
        }
      }
    }
    else if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x2a8))
                (0x3f800000,DAT_0139fd8c,DAT_0139fee0,0x3f800000,plVar12,
                 *(undefined8 *)(*plVar12 + 0x2b0));
      plVar12 = *(long **)(unaff_x21 + 0x40);
      if (plVar12 != (long *)0x0) {
        lVar14 = *plVar12;
        puVar13 = (undefined8 *)PTR_DAT_0727a818;
LAB_0341eb9c:
        (**(code **)(lVar14 + 0x558))(plVar12,*puVar13,*(undefined8 *)(lVar14 + 0x560));
        return;
      }
    }
  }
LAB_0341f13c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


