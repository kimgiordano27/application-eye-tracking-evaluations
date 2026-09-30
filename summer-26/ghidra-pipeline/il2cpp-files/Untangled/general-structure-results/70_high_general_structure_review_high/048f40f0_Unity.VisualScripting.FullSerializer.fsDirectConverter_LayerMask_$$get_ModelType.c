/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$get_ModelType
ENTRY_POINT: 048f40f0
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__get_ModelType(void)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  uint uVar8;
  long *unaff_x25;
  uint unaff_w26;
  
  do {
    FUN_048f3d18();
    FUN_048f5a14();
    if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    plVar3 = (long *)FUN_068c3600(unaff_x23,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
          goto LAB_048f4170;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x25,0x14);
LAB_048f4170:
    iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x15) * 0x10 + 0x138);
          goto LAB_048f41d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x25,0x15);
LAB_048f41d0:
    (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w26) {
      FUN_06872da8(&stack0x00000008,0);
      FUN_04e062a8();
      uVar1 = *(uint *)(unaff_x20 + 0x78);
      if ((int)uVar1 < 1) goto LAB_048f431c;
      uVar8 = 0;
      break;
    }
    lVar5 = *unaff_x21;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_w22) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    unaff_x23 = *(long *)(lVar5 + (long)(int)unaff_w22 * 8 + 0x20);
  } while( true );
LAB_048f4220:
  lVar5 = *(long *)(unaff_x20 + 0x58);
  if (lVar5 == 0) {
LAB_048f4348:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar8 * 8 + 0x20);
  if ((lVar5 == 0) || (plVar3 = (long *)FUN_068c3600(lVar5,0), plVar3 == (long *)0x0))
  goto LAB_048f4348;
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x16) * 0x10 + 0x138);
        goto LAB_048f42a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x25,0x16);
LAB_048f42a0:
  iVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
        goto LAB_048f4300;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_02eea86c(plVar3,*unaff_x25,0x17);
LAB_048f4300:
  (*(code *)*puVar4)(plVar3,iVar2 + -1,puVar4[1]);
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar1) {
LAB_048f431c:
    FUN_04cfc790((long *)(unaff_x20 + 0x58),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    return;
  }
  goto LAB_048f4220;
}


