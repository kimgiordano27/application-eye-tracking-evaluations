/*
FUNCTION_NAME: Unity.AppUI.UI.SliderBase.UxmlSerializedData<int>$$Deserialize
ENTRY_POINT: 050143d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_AppUI_UI_SliderBase_UxmlSerializedData<int>__Deserialize(void)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x19;
  undefined8 unaff_x20;
  int iVar8;
  int unaff_w21;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  int unaff_w29;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  int iStack0000000000000010;
  undefined8 in_stack_00000018;
  int in_stack_00000020;
  undefined8 in_stack_00000028;
  
  do {
    lVar6 = FUN_0367c9fc();
    do {
                    /* catch() { ... } // from try @ 050143d4 with catch @ 050143dc */
                    /* try { // try from 050143e0 to 051143e7 has its CatchHandler @ 050143f0 */
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
                    /* try { // try from 050143e8 to 051143f3 has its CatchHandler @ 05014210 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 050143b4 with catch @ 050143f0
                       catch(type#2 @ 00000000) { ... } // from try @ 050143e0 with catch @ 050143f0
                        */
      lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
      if (lVar6 == 0) {
LAB_05014480:
                    /* WARNING: Subroutine does not return */
        FUN_03642c18();
      }
      in_stack_00000028 = *(undefined8 *)(lVar6 + 0x260);
      FUN_0732f5d0(&stack0x00000028,unaff_x23,0);
      do {
        unaff_w24 = unaff_w24 + 1;
        in_stack_00000020 = in_stack_00000020 + in_stack_00000018._4_4_;
        if (unaff_w24 == unaff_w21) {
                    /* catch() { ... } // from try @ 050144d4 with catch @ 0501443c
                       catch() { ... } // from try @ 05014598 with catch @ 0501443c
                       catch() { ... } // from try @ 05014628 with catch @ 0501443c
                       catch() { ... } // from try @ 05014660 with catch @ 0501443c */
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0))();
          return;
        }
        if (unaff_w29 == 0) {
          unaff_x23 = 0;
        }
        else {
          unaff_x23 = thunk_FUN_0367fe20(*(undefined8 *)PTR_DAT_079fd710);
          FUN_073230b0(unaff_x23,0);
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc();
          }
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_036a1978();
          }
          lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
          if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_0367c9fc();
          }
          if (unaff_x23 == 0) goto LAB_05014480;
          FUN_0732523c(unaff_x23,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x28),0);
        }
        if (unaff_w24 * in_stack_00000018._4_4_ <
            unaff_w24 * in_stack_00000018._4_4_ + in_stack_00000018._4_4_) {
          iVar8 = 0;
          bVar2 = true;
          puVar11 = (undefined8 *)(in_stack_00000008 + (long)in_stack_00000020 * 0x20);
          do {
            if ((*(ushort *)
                  (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50) + 0x135) & 1) ==
                0) {
              FUN_0367c9fc();
            }
            lVar6 = thunk_FUN_0367fe20();
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x58))();
            if (lVar6 == 0) goto LAB_05014480;
            *(undefined8 *)(lVar6 + 0x38) = unaff_x20;
            thunk_FUN_036b7ad0();
            if (unaff_x22 == 0) goto LAB_05014480;
            if (*(uint *)(unaff_x22 + 0x18) <= (uint)(in_stack_00000020 + iVar8)) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c20();
            }
            uVar13 = *puVar11;
            uVar12 = puVar11[3];
            uVar4 = puVar11[2];
            *(undefined8 *)(lVar6 + 0x18) = puVar11[1];
            *(undefined8 *)(lVar6 + 0x10) = uVar13;
            *(undefined8 *)(lVar6 + 0x28) = uVar12;
            *(undefined8 *)(lVar6 + 0x20) = uVar4;
            thunk_FUN_036b7ad0(lVar6 + 0x10,0);
            lVar3 = FUN_03b48fb0(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
            if (lVar3 == 0) goto LAB_05014480;
            FUN_07322d3c(lVar3,*(undefined8 *)(lVar6 + 0x18),0);
            plVar9 = (long *)(lVar6 + 0x30);
            *plVar9 = lVar3;
            thunk_FUN_036b7ad0(plVar9,lVar3);
            if (*plVar9 == 0) goto LAB_05014480;
            FUN_0745cb80(*plVar9,1,0);
            lVar10 = *plVar9;
            lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0367c9fc();
            }
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_036a1978();
            }
            lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_0367c9fc();
            }
            if (lVar10 == 0) goto LAB_05014480;
            FUN_0732523c(lVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x30),0);
            if (bVar2) {
              lVar10 = *plVar9;
              lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0367c9fc();
              }
              if (*(int *)(lVar3 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_0367c9fc();
              }
              if (lVar10 == 0) goto LAB_05014480;
              FUN_0732523c(lVar10,*(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x38),0);
            }
            if (*plVar9 == 0) goto LAB_05014480;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80))
                      (*plVar9,*(undefined8 *)(lVar6 + 0x10));
            lVar3 = *plVar9;
            if ((*(ushort *)
                  (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x90) + 0x135) & 1) ==
                0) {
              FUN_0367c9fc();
            }
            uVar4 = thunk_FUN_0367fe20();
            lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
            (*(code *)**(undefined8 **)(lVar10 + 0x98))(uVar4,lVar6,*(undefined8 *)(lVar10 + 0x88));
            if (lVar3 == 0) goto LAB_05014480;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa0))
                      (lVar3,uVar4);
            lVar3 = *plVar9;
            if ((*(ushort *)
                  (*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xb0) + 0x135) & 1) ==
                0) {
              FUN_0367c9fc();
            }
            uVar4 = thunk_FUN_0367fe20();
            lVar10 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
            (*(code *)**(undefined8 **)(lVar10 + 0xb8))(uVar4,lVar6,*(undefined8 *)(lVar10 + 0xa8));
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0))
                      (lVar3,uVar4);
            plVar5 = (long *)thunk_FUN_036a1ed0();
            lVar3 = *plVar5;
            if (lVar3 == 0) goto LAB_05014480;
            uVar4 = *(undefined8 *)(lVar6 + 0x30);
            lVar6 = *(long *)(lVar3 + 0x10);
            lVar10 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd0);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar6 == 0) goto LAB_05014480;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar4;
              thunk_FUN_036b7ad0(puVar7);
              if (unaff_w29 != 0) goto LAB_050142d4;
LAB_05014260:
              lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_0367c9fc();
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar6 = (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
              if (lVar6 == 0) goto LAB_05014480;
              in_stack_00000028 = *(undefined8 *)(lVar6 + 0x260);
              FUN_0732f5d0(&stack0x00000028,*plVar9,0);
            }
            else {
              FUN_0459f03c(lVar3,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              if (unaff_w29 == 0) goto LAB_05014260;
LAB_050142d4:
              if (unaff_x23 == 0) goto LAB_05014480;
              FUN_0732afd4(unaff_x23,*plVar9,0);
            }
            iVar8 = iVar8 + 1;
            bVar2 = false;
            puVar11 = puVar11 + 4;
          } while (in_stack_00000018._4_4_ != iVar8);
        }
        iVar8 = in_stack_00000000._4_4_;
        if ((_iStack0000000000000010 & 0x100000000) == 0) {
          do {
            lVar6 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
            if (unaff_w29 == 0) {
              lVar6 = *(long *)(lVar6 + 0x10);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_0367c9fc();
              }
              if (*(int *)(lVar6 + 0xe4) == 0) {
                thunk_FUN_036a1978();
              }
              lVar6 = (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20))();
              if (lVar6 == 0) goto LAB_05014480;
              in_stack_00000028 = *(undefined8 *)(lVar6 + 0x260);
              uVar4 = (*(code *)**(undefined8 **)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xd8))();
              FUN_0732f5d0(&stack0x00000028,uVar4,0);
            }
            else {
              uVar4 = (*(code *)**(undefined8 **)(lVar6 + 0xd8))();
              if (unaff_x23 == 0) goto LAB_05014480;
              FUN_0732afd4(unaff_x23,uVar4,0);
            }
            bVar2 = iVar8 != -1;
            iVar8 = iVar8 + 1;
          } while (bVar2);
        }
        unaff_w21 = iStack0000000000000010;
      } while (unaff_w29 == 0);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x10);
    } while ((*(ushort *)(lVar6 + 0x135) & 1) != 0);
  } while( true );
}


