/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeIntArray
ENTRY_POINT: 016cab28
PROGRAM: LethalApe-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * ExitGames_Client_Photon_Protocol16__DeserializeIntArray(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  int in_w9;
  ulong uVar6;
  int *piVar7;
  long *unaff_x19;
  undefined8 uVar8;
  
  puVar2 = PTR_DAT_02bedd80;
  puVar1 = PTR_DAT_02bc0458;
  if (in_w9 == 0) {
    plVar4 = (long *)unaff_x19[6];
    thunk_FUN_00a2a134();
    if (plVar4 == (long *)0x0) {
                    /* try { // try from 016cac34 to 017cac43 has its CatchHandler @ 016cac44 */
                    /* WARNING: Could not recover jumptable at 0x016cac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 016cabe4 with catch @ 016cac44
                       catch() { ... } // from try @ 016cac34 with catch @ 016cac44 */
      plVar4 = (long *)(**(code **)(*unaff_x19 + 0x218))();
      return plVar4;
    }
  }
  else {
    plVar4 = unaff_x19;
    if (param_1 != *(long *)PTR_DAT_02bc0458) {
      uVar8 = *(undefined8 *)PTR_DAT_02beab18;
      if (*(int *)(*(long *)PTR_DAT_02be7a18 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      FUN_0172b2e8(uVar8,0);
      lVar5 = *unaff_x19;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar6 != 0) {
                    /* try { // try from 016cab8c to 017cabab has its CatchHandler @ 016cab8c
                       catch() { ... } // from try @ 016cab8c with catch @ 016cab8c
                       catch() { ... } // from try @ 016cabcc with catch @ 016cab8c
                       catch() { ... } // from try @ 016cabfc with catch @ 016cab8c
                       catch() { ... } // from try @ 016cac4c with catch @ 016cab8c */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
                    /* catch(type#1 @ 02a69060) { ... } // from try @ 016cabac with catch @ 016cabcc
                       try { // try from 016cabcc to 017cabe3 has its CatchHandler @ 016cab8c */
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_016cabd0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 016cabac to 017cabcb has its CatchHandler @ 016cabcc */
      puVar3 = (undefined8 *)FUN_0099eb60();
LAB_016cabd0:
      plVar4 = (long *)(*(code *)*puVar3)();
                    /* try { // try from 016cabe4 to 017cabfb has its CatchHandler @ 016cac44 */
      if ((plVar4 == (long *)0x0) || (*plVar4 != *(long *)puVar1)) {
        plVar4 = (long *)FUN_016cac48();
        return plVar4;
      }
    }
  }
  return plVar4;
}


