/*
FUNCTION_NAME: HurricaneVR.Framework.Components.HVRPhysicsDoor.<DoorCloseRoutine>d__68$$MoveNext
ENTRY_POINT: 051f6398
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_12;ray_or_cast_sink_hits_2;strong_file_logging_hits_2
*/


void HurricaneVR_Framework_Components_HVRPhysicsDoor_<DoorCloseRoutine>d__68__MoveNext
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR_DAT_06d01eb0;
  iVar2 = FUN_05501738(param_2,*param_1,0);
  lVar6 = *(long *)puVar1;
  lVar8 = *unaff_x21;
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x110);
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar6);
  }
  uVar10 = FUN_056109c0(uVar10,0);
  if (lVar8 != 0) {
    lVar6 = FUN_054ff45c(lVar8,*(undefined8 *)PTR_DAT_06d39110,uVar10,0);
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02ef170c(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar6,lVar8);
      }
    }
    *(long *)(unaff_x20 + 0x30) = lVar4;
    lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02eea768(lVar8);
    }
    if (lVar6 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_02ef170c(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar6,lVar8);
      }
    }
    thunk_FUN_02f411dc((long *)(unaff_x20 + 0x30),lVar4);
    *(undefined4 *)(unaff_x20 + 0x28) = 0xffffffff;
    if (iVar2 == 0) {
      *(undefined8 *)(unaff_x20 + 0x10) = 0;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x10),0);
    }
    else {
      uVar10 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d03ce0,iVar2);
      *(undefined8 *)(unaff_x20 + 0x10) = uVar10;
      thunk_FUN_02f411dc();
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02eea768();
      }
      uVar10 = FUN_02f07f14(lVar6,iVar2);
      *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
      thunk_FUN_02f411dc((undefined8 *)(unaff_x20 + 0x18));
      lVar6 = *(long *)(unaff_x20 + 0x40);
      uVar10 = *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      uVar10 = FUN_056109c0(uVar10,0);
      if (lVar6 == 0) goto LAB_051f664c;
      lVar6 = FUN_054ff45c(lVar6,*(undefined8 *)PTR_DAT_06d39108,uVar10,0);
      lVar8 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xc0);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_02eea768(lVar8);
      }
      if (lVar6 == 0) {
        thunk_FUN_02f239f0(PTR_DAT_06d39128);
        uVar10 = thunk_FUN_02ef1808();
        uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d39130);
        FUN_054f60d0(uVar10,uVar5,0);
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94(uVar10);
      }
      lVar4 = thunk_FUN_02ef170c(lVar6,lVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(lVar6,lVar8);
      }
      if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          if (uVar7 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c8();
          }
          FUN_051f852c();
          uVar7 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    if (*unaff_x21 != 0) {
      uVar3 = FUN_05501738(*unaff_x21,*(undefined8 *)PTR_DAT_06d39118,0);
      *(undefined4 *)(unaff_x20 + 0x38) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      thunk_FUN_02f411dc();
      return;
    }
  }
LAB_051f664c:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


