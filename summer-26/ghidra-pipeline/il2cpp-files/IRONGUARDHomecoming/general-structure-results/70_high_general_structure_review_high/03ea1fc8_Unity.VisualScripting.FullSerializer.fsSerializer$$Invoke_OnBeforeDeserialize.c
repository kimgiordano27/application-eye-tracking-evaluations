/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnBeforeDeserialize
ENTRY_POINT: 03ea1fc8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnBeforeDeserialize(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x23;
  
  if (unaff_x21 == 0) {
    return unaff_x20;
  }
  lVar2 = thunk_FUN_01f116d0();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08cfc();
  }
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 9) * 0x10 + 0x138);
          goto LAB_03ea2044;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,9);
LAB_03ea2044:
                    /* try { // try from 03ea204c to 03fa2057 has its CatchHandler @ 03ea20e4 */
    uVar7 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar7 & 1) != 0) {
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
                    /* try { // try from 03ea206c to 03fa206f has its CatchHandler @ 03ea20e0 */
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_03ea20a0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0);
LAB_03ea20a0:
      iVar1 = (*(code *)*puVar3)(param_1,puVar3[1]);
      if (iVar1 == 1) {
        lVar6 = *param_1;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x23) {
              puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
              goto LAB_03ea2154;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0xe);
LAB_03ea2154:
        param_1 = (long *)(*(code *)*puVar3)(param_1,0,puVar3[1]);
      }
      else if (1 < iVar1) {
        thunk_FUN_01efb3a4(Method_OVRBounded2D_TryGetBoundaryPoints__);
        uVar4 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0457b5f8);
        FUN_03579ad0(uVar4,uVar5,0);
        uVar5 = thunk_FUN_01efb3a4(PTR_DAT_0457b600);
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar4,uVar5);
      }
    }
    if (param_1 != (long *)0x0) {
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xf) * 0x10 + 0x138);
            goto LAB_03ea21bc;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ecb238(param_1,*unaff_x23,0xf);
LAB_03ea21bc:
      (*(code *)*puVar3)(param_1,lVar2,puVar3[1]);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


