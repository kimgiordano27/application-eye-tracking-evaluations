/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<LayerMask>$$TrySerialize
ENTRY_POINT: 048f4154
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<LayerMask>__TrySerialize
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  uint uVar8;
  long *unaff_x25;
  uint unaff_w26;
  
code_r0x048f4154:
  puVar3 = (undefined8 *)FUN_02eea86c(unaff_x23,param_2,param_3);
  do {
    iVar2 = (*(code *)*puVar3)(unaff_x23,puVar3[1]);
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x15) * 0x10 + 0x138);
          goto LAB_048f41d0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x25,0x15);
LAB_048f41d0:
    (*(code *)*puVar3)(unaff_x23,iVar2 + -1,puVar3[1]);
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == unaff_w26) {
      FUN_06872da8(&stack0x00000008,0);
      FUN_04e062a8();
      uVar1 = *(uint *)(unaff_x20 + 0x78);
      if ((int)uVar1 < 1) goto LAB_048f431c;
                    /* try { // try from 048f421c to 049f43c3 has its CatchHandler @ 048f421c
                       catch() { ... } // from try @ 048f421c with catch @ 048f421c
                       catch() { ... } // from try @ 048f442c with catch @ 048f421c
                       catch() { ... } // from try @ 048f4440 with catch @ 048f421c
                       catch() { ... } // from try @ 048f447c with catch @ 048f421c
                       catch() { ... } // from try @ 048f44c4 with catch @ 048f421c */
      uVar8 = 0;
      goto LAB_048f4220;
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
    lVar5 = *(long *)(lVar5 + (long)(int)unaff_w22 * 8 + 0x20);
    FUN_048f3d18();
    FUN_048f5a14();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    unaff_x23 = (long *)FUN_068c3600(lVar5,0);
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar5 = *unaff_x23;
    param_2 = *unaff_x25;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 == 0) break;
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar7 + -2) != param_2) {
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
      if (uVar6 == 0) goto LAB_048f4150;
    }
    puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x14) * 0x10 + 0x138);
  } while( true );
LAB_048f4150:
  param_3 = 0x14;
  goto code_r0x048f4154;
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
  if ((lVar5 == 0) || (plVar4 = (long *)FUN_068c3600(lVar5,0), plVar4 == (long *)0x0))
  goto LAB_048f4348;
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x16) * 0x10 + 0x138);
        goto LAB_048f42a0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x25,0x16);
LAB_048f42a0:
  iVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
  lVar5 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x25) {
        puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0x17) * 0x10 + 0x138);
        goto LAB_048f4300;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_02eea86c(plVar4,*unaff_x25,0x17);
LAB_048f4300:
  (*(code *)*puVar3)(plVar4,iVar2 + -1,puVar3[1]);
  uVar8 = uVar8 + 1;
  if (uVar8 == uVar1) {
LAB_048f431c:
    FUN_04cfc790((long *)(unaff_x20 + 0x58),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
    return;
  }
  goto LAB_048f4220;
}


