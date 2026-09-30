/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsSerializer$$Invoke_OnAfterDeserialize
ENTRY_POINT: 03ea2074
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6
*/


long * Unity_VisualScripting_FullSerializer_fsSerializer__Invoke_OnAfterDeserialize
                 (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  int *in_x10;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x23;
  
  while (!(bool)in_ZR) {
                    /* try { // try from 03ea2078 to 03fa2083 has its CatchHandler @ 03ea20dc */
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
                    /* try { // try from 03ea2084 to 03fa20d3 has its CatchHandler @ 03ea1fb4 */
      puVar2 = (undefined8 *)FUN_01ecb238();
      goto LAB_03ea20a0;
    }
    in_ZR = *(long *)(in_x10 + 2) == param_3;
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_03ea20a0:
  iVar1 = (*(code *)*puVar2)();
  if (iVar1 == 1) {
    lVar5 = *unaff_x19;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
                    /* try { // try from 03ea20d4 to 03fa20d7 has its CatchHandler @ 03ea20d8 */
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03ea2124 with catch @ 03ea2144
                       catch(type#2 @ 00000000) { ... } // from try @ 03ea213c with catch @ 03ea2144
                        */
          puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xe) * 0x10 + 0x138);
          goto LAB_03ea2154;
        }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea20d4 with catch @ 03ea20d8
                       try { // try from 03ea20d8 to 03fa20fb has its CatchHandler @ 03ea1fb4 */
        uVar6 = uVar6 - 1;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea2078 with catch @ 03ea20dc
                        */
        piVar7 = piVar7 + 4;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea206c with catch @ 03ea20e0
                        */
      } while (uVar6 != 0);
    }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 03ea204c with catch @ 03ea20e4
                        */
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_03ea2154:
    unaff_x19 = (long *)(*(code *)*puVar2)();
  }
  else if (1 < iVar1) {
                    /* try { // try from 03ea20fc to 03fa20ff has its CatchHandler @ 03ea2120 */
                    /* try { // try from 03ea2100 to 03fa2123 has its CatchHandler @ 03ea1fb4 */
    thunk_FUN_01efb3a4(Method_OVRBounded2D_TryGetBoundaryPoints__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_0457b5f8);
    FUN_03579ad0(uVar3,uVar4,0);
    uVar4 = thunk_FUN_01efb3a4(PTR_DAT_0457b600);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar3,uVar4);
  }
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = *unaff_x19;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 0xf) * 0x10 + 0x138);
        goto LAB_03ea21bc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_01ecb238(unaff_x19,*unaff_x23,0xf);
LAB_03ea21bc:
  (*(code *)*puVar2)(unaff_x19);
  return unaff_x19;
}


