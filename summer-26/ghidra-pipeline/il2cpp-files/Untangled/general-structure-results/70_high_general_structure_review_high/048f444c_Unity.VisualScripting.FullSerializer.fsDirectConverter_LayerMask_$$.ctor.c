/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$.ctor
ENTRY_POINT: 048f444c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>___ctor(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x26;
  ulong unaff_x27;
  
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 048f4418 with catch @ 048f444c
                        */
  if (in_NG != in_OV) {
LAB_048f463c:
    FUN_04e06224();
    uVar1 = *(uint *)(unaff_x21 + 0x78);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        lVar6 = *(long *)(unaff_x21 + 0x58);
        if (lVar6 == 0) goto LAB_048f47a4;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_048f47a8;
        if (*(long *)(lVar6 + uVar7 * 8 + 0x20) == unaff_x19) {
          if ((unaff_x19 == 0) || (plVar3 = (long *)FUN_068c3600(), plVar3 == (long *)0x0))
          goto LAB_048f47a4;
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x16) * 0x10 + 0x138);
                goto LAB_048f46f4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x26,0x16);
LAB_048f46f4:
          iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x17) * 0x10 + 0x138);
                goto LAB_048f4754;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x26,0x17);
LAB_048f4754:
          (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar1);
    }
    FUN_04cfc70c((long *)(unaff_x21 + 0x58));
    return;
  }
  lVar6 = *unaff_x22;
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_048f47a8:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    if ((*(long *)(lVar6 + 0x20) != 0) &&
       (plVar3 = (long *)FUN_068c603c(*(long *)(lVar6 + 0x20),0), plVar3 != (long *)0x0)) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06d39720) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_048f44d0;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*(long *)PTR_DAT_06d39720,1);
LAB_048f44d0:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      FUN_06872d14(&stack0x00000008,uVar5,0);
      uVar7 = 0;
      do {
        lVar6 = *unaff_x22;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c8();
        }
        if (*(long *)(lVar6 + uVar7 * 8 + 0x20) == unaff_x19) {
          FUN_048f3d18();
          FUN_048f5a14();
          lVar6 = *unaff_x22;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          plVar3 = (long *)FUN_068c3600(lVar6,0);
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
                goto LAB_048f45b4;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x26,0x14);
LAB_048f45b4:
          iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar6 = *plVar3;
          uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *unaff_x26) {
                puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x15) * 0x10 + 0x138);
                goto LAB_048f4614;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x26,0x15);
LAB_048f4614:
          (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != unaff_x27);
      FUN_06872da8(&stack0x00000008,0);
      goto LAB_048f463c;
    }
  }
LAB_048f47a4:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


