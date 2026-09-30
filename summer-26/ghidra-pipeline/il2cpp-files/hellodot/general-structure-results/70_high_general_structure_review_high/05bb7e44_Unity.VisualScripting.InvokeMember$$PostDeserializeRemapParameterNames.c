/*
FUNCTION_NAME: Unity.VisualScripting.InvokeMember$$PostDeserializeRemapParameterNames
ENTRY_POINT: 05bb7e44
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_InvokeMember__PostDeserializeRemapParameterNames(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *unaff_x19;
  long *plVar12;
  long *unaff_x25;
  
  puVar5 = (undefined8 *)FUN_02ce0a7c();
  iVar3 = (*(code *)*puVar5)();
  if (iVar3 == 0) {
    lVar9 = *unaff_x19;
  }
  else {
    plVar6 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce360);
    FUN_04dc5d24(plVar6,0);
    uVar7 = (**(code **)(*unaff_x19 + 0x328))();
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05bb8104;
      FUN_04dc7640(plVar6,*(undefined8 *)PTR_DAT_065e0110,0);
      uVar8 = (**(code **)(*unaff_x19 + 0x168))();
      FUN_04dc7640(plVar6,uVar8,0);
      FUN_04dc7f18(plVar6,0x20,0);
    }
    puVar2 = PTR_DAT_0663fee0;
    puVar1 = PTR_DAT_065d9fc0;
    plVar12 = (long *)unaff_x19[2];
    if (plVar12 != (long *)0x0) {
      iVar3 = 0;
      do {
        lVar9 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *unaff_x25) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_05bb7f60;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,*unaff_x25,1);
LAB_05bb7f60:
        iVar4 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (iVar4 <= iVar3) break;
        plVar12 = (long *)unaff_x19[2];
        if (plVar12 == (long *)0x0) goto LAB_05bb8104;
        lVar9 = *plVar12;
        uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_05bb7fc8;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)puVar1,0);
LAB_05bb7fc8:
        lVar9 = (*(code *)*puVar5)(plVar12,iVar3,puVar5[1]);
        if (lVar9 == 0) {
          plVar12 = (long *)0x0;
        }
        else {
          uVar8 = *(undefined8 *)puVar2;
          plVar12 = (long *)thunk_FUN_02cea798(lVar9,uVar8);
          if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02ce8018(lVar9,uVar8);
          }
        }
        if (iVar3 != 0) {
          if (plVar6 == (long *)0x0) goto LAB_05bb8104;
          FUN_04dc7f18(plVar6,0x20,0);
        }
        if (plVar12 == (long *)0x0) goto LAB_05bb8104;
        lVar10 = *plVar12;
        lVar9 = *(long *)puVar2;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar9) {
              puVar5 = (undefined8 *)(lVar10 + (long)(*piVar11 + 0x18) * 0x10 + 0x138);
              goto LAB_05bb806c;
            }
            uVar7 = uVar7 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar9,0x18);
LAB_05bb806c:
        uVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
        if (plVar6 == (long *)0x0) goto LAB_05bb8104;
        FUN_04dc7640(plVar6,uVar8,0);
        plVar12 = (long *)unaff_x19[2];
        iVar3 = iVar3 + 1;
      } while (plVar12 != (long *)0x0);
    }
    uVar7 = (**(code **)(*unaff_x19 + 0x328))();
    if ((uVar7 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_05bb8104;
      FUN_04dc7640(plVar6,*(undefined8 *)PTR_DAT_065c95e8,0);
    }
    else if (plVar6 == (long *)0x0) {
LAB_05bb8104:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar9 = *plVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x05bb8100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x168))();
  return;
}


