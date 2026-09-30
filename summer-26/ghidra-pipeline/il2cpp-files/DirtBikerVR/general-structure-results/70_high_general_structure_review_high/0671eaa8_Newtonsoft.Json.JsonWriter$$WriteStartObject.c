/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartObject
ENTRY_POINT: 0671eaa8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


int Newtonsoft_Json_JsonWriter__WriteStartObject
              (long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  ulong in_x9;
  long in_x10;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  uint unaff_w26;
  long *unaff_x27;
  long unaff_x28;
  int unaff_w29;
  undefined *puVar7;
  
  while (lVar8 = in_x10, (int)in_x9 != 0) {
    do {
      plVar4 = *(long **)(unaff_x22 + 0x20);
      if (plVar4 == (long *)0x0) goto LAB_0671eb08;
      iVar3 = (**(code **)(*plVar4 + 0x1d8))
                        (plVar4,param_1 + (ulong)unaff_w26,param_4,
                         lVar8 + (ulong)(uint)(unaff_w20 << 1),unaff_w24,0,
                         *(undefined8 *)(*plVar4 + 0x1e0));
      unaff_w24 = unaff_w24 - iVar3;
      unaff_w20 = iVar3 + unaff_w20;
      if (unaff_w24 < 1) {
LAB_0671eae8:
        return unaff_w19 - unaff_w24;
      }
      plVar4 = *(long **)(unaff_x22 + 0x20);
      iVar3 = unaff_w24;
      if (plVar4 != (long *)0x0) {
        lVar8 = *plVar4;
        bVar1 = *(byte *)(*(long *)PTR_DAT_0849fb10 + 0x130);
        if ((bVar1 <= *(byte *)(lVar8 + 0x130)) &&
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_0849fb10))
        {
          uVar2 = (**(code **)(lVar8 + 0x218))(plVar4,*(undefined8 *)(lVar8 + 0x220));
          iVar3 = unaff_w24 - (unaff_w24 != 1 & uVar2);
        }
      }
      plVar4 = *(long **)(unaff_x22 + 0x10);
      iVar3 = iVar3 << (ulong)(*(byte *)(unaff_x22 + 0x44) & 0x1f);
      if (0x7f < iVar3) {
        iVar3 = unaff_w29;
      }
      if (*(char *)(unaff_x22 + 0x45) == '\0') {
        if (plVar4 == (long *)0x0) goto LAB_0671eb08;
        uVar2 = (**(code **)(*plVar4 + 0x368))
                          (plVar4,*unaff_x23,0,iVar3,*(undefined8 *)(*plVar4 + 0x370));
        unaff_w26 = 0;
        plVar4 = unaff_x23;
      }
      else {
        if (plVar4 == (long *)0x0) goto LAB_0671eb08;
        bVar1 = *(byte *)(*unaff_x27 + 0x130);
        if ((*(byte *)(*plVar4 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) != *unaff_x27))
        goto LAB_0671eb08;
        unaff_w26 = *(uint *)((long)plVar4 + 0x34);
        uVar2 = FUN_066ff3e4(plVar4,iVar3,0);
        plVar4 = plVar4 + 5;
      }
      if (uVar2 == 0) goto LAB_0671eae8;
      param_4 = (ulong)uVar2;
      if ((int)(uVar2 | unaff_w26) < 0) {
Newtonsoft_Json_JsonWriter__WriteEndConstructor:
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar5 = thunk_FUN_03ac74bc();
        puVar7 = PTR_DAT_0849fac8;
LAB_0671eb5c:
        uVar6 = thunk_FUN_03af1434(puVar7);
        FUN_066b7618(uVar5,uVar6,0);
        uVar6 = thunk_FUN_03af1434(PTR_DAT_084a8ce8);
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,uVar6);
      }
      if (param_4 + unaff_w26 >> 0x1f != 0) {
Newtonsoft_Json_JsonWriter__WriteEndArray:
        uVar5 = FUN_03a8a9d0();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar5,*(undefined8 *)PTR_DAT_084a8ce8);
      }
      param_1 = *plVar4;
      if (param_1 == 0) {
LAB_0671eb08:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      iVar3 = (int)*(ulong *)(param_1 + 0x18);
      if (iVar3 < (int)(uVar2 + unaff_w26)) goto Newtonsoft_Json_JsonWriter__WriteEndConstructor;
      if (unaff_w20 < 0) {
LAB_0671eb40:
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar5 = thunk_FUN_03ac74bc();
        puVar7 = PTR_DAT_084a8cf0;
        goto LAB_0671eb5c;
      }
      if (unaff_w20 + unaff_w24 < 0) goto Newtonsoft_Json_JsonWriter__WriteEndArray;
      if (unaff_x21 == 0) goto LAB_0671eb08;
      in_x9 = *(ulong *)(unaff_x21 + 0x18);
      if ((int)in_x9 < unaff_w20 + unaff_w24) goto LAB_0671eb40;
      if ((*(ulong *)(param_1 + 0x18) & 0xffffffff) == 0) {
        param_1 = 0;
      }
      else {
        if (iVar3 == 0) goto LAB_0671eb88;
        param_1 = param_1 + 0x20;
      }
      lVar8 = 0;
      in_x10 = unaff_x28;
    } while ((in_x9 & 0xffffffff) == 0);
  }
LAB_0671eb88:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0671eb88 to 0681eb8b has its CatchHandler @ 0671ebd4 */
  FUN_03a8a9c8();
}


