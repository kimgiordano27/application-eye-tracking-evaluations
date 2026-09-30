/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeByteArray
ENTRY_POINT: 016caa8c
PROGRAM: LethalApe-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


long * ExitGames_Client_Photon_Protocol16__DeserializeByteArray(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if ((DAT_02dbbe9f & 1) == 0) {
    thunk_FUN_009efa0c(PTR_DAT_02bf8d10);
    thunk_FUN_009efa0c(PTR_DAT_02bedd80);
    thunk_FUN_009efa0c(PTR_DAT_02beab18);
    thunk_FUN_009efa0c(PTR_DAT_02bc0458);
    thunk_FUN_009efa0c(PTR_DAT_02be7a18);
    DAT_02dbbe9f = 1;
  }
  puVar3 = PTR_DAT_02bedd80;
  puVar2 = PTR_DAT_02bc0458;
  if (param_1 == (long *)0x0) {
LAB_016cabf8:
    plVar5 = (long *)FUN_016cac48();
    return plVar5;
  }
  lVar6 = *param_1;
  bVar1 = *(byte *)(*(long *)PTR_DAT_02bf8d10 + 300);
  if (((*(byte *)(lVar6 + 300) < bVar1) ||
      (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_02bf8d10)) ||
     ((char)param_1[0x19] != '\0')) {
    plVar5 = param_1;
    if (lVar6 != *(long *)PTR_DAT_02bc0458) {
      uVar9 = *(undefined8 *)PTR_DAT_02beab18;
      if (*(int *)(*(long *)PTR_DAT_02be7a18 + 0xe0) == 0) {
        thunk_FUN_009ddef4();
      }
      uVar9 = FUN_0172b2e8(uVar9,0);
      lVar6 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_016cabd0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_0099eb60(param_1,*(long *)puVar3,0);
LAB_016cabd0:
      plVar5 = (long *)(*(code *)*puVar4)(param_1,uVar9,puVar4[1]);
      if ((plVar5 == (long *)0x0) || (*plVar5 != *(long *)puVar2)) goto LAB_016cabf8;
    }
  }
  else {
    plVar5 = (long *)param_1[6];
    thunk_FUN_00a2a134();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x016cac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar5 = (long *)(**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
      return plVar5;
    }
  }
  return plVar5;
}


