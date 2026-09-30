/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$SetupReader
ENTRY_POINT: 066ea7a8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x066eaa0c) */

void Newtonsoft_Json_JsonSerializer__SetupReader(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long *in_stack_00000018;
  
  do {
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_066ea7f4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(unaff_x23,*unaff_x29,0);
LAB_066ea7f4:
    uVar4 = (*(code *)*puVar2)(unaff_x23,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      iVar7 = 6;
LAB_066ea8f0:
      if (in_stack_00000018 != (long *)0x0) {
        lVar3 = *in_stack_00000018;
                    /* try { // try from 066ea900 to 067ea98b has its CatchHandler @ 066ea9ec */
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_08488550) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_066ea950;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*(long *)PTR_DAT_08488550,0);
LAB_066ea950:
        (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
      }
      if ((iVar7 != 6) && (iVar7 != 0)) {
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea8e4 with catch @ 066ea9e8
                        */
                    /* catch(type#1 @ 07fde6e8) { ... } // from try @ 066ea900 with catch @ 066ea9ec
                        */
                    /* try { // try from 066eaa04 to 067eaa1b has its CatchHandler @ 066eaa60 */
        return;
      }
      do {
        unaff_x26 = unaff_x26 + 1;
        if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x26) {
          return;
        }
        if (*(uint *)(unaff_x21 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        unaff_x22 = *(long **)(unaff_x21 + unaff_x26 * 8 + 0x20);
        plVar1 = (long *)FUN_0449460c(unaff_x22,*unaff_x27);
      } while (plVar1 == (long *)0x0);
      lVar3 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_084a7b28) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_066ea788;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4(plVar1,*(long *)PTR_DAT_084a7b28,0);
LAB_066ea788:
      unaff_x23 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    else {
      if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_066ea858;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x28,0);
LAB_066ea858:
      lVar3 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x10);
      uVar8 = *unaff_x19;
      if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03ae8be4(*(long *)(unaff_x25 + 0xe0));
      }
      uVar4 = FUN_067690d8(uVar6,uVar8,0);
      unaff_x23 = in_stack_00000018;
      if ((uVar4 & 1) != 0) {
        *unaff_x20 = unaff_x22;
        thunk_FUN_03afed3c();
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c0();
        }
        uVar6 = (**(code **)(*unaff_x22 + 0x1c8))(unaff_x22,*(undefined8 *)(*unaff_x22 + 0x1d0));
        *unaff_x19 = uVar6;
                    /* try { // try from 066ea8e0 to 067ea8e3 has its CatchHandler @ 066ea9e4 */
                    /* try { // try from 066ea8e4 to 067ea8ef has its CatchHandler @ 066ea9e8 */
        thunk_FUN_03afed3c();
        iVar7 = 9;
        goto LAB_066ea8f0;
      }
    }
    in_stack_00000018 = unaff_x23;
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  } while( true );
}


