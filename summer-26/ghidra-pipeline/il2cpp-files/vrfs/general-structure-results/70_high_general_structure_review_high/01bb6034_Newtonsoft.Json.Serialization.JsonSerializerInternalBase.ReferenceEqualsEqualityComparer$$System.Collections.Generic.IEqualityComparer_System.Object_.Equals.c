/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 01bb6034
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  
  while (iVar2 = FUN_01bb8300(param_1,param_2,0,*(undefined4 *)(param_2 + 0x18)), 0 < iVar2) {
    if (*unaff_x19 != 0) {
      FUN_01bb64e4();
    }
    plVar3 = *(long **)(unaff_x20 + 0x50);
    if (plVar3 == (long *)0x0) goto LAB_01bb61b0;
    (**(code **)(*plVar3 + 0x398))
              (plVar3,*(undefined8 *)(unaff_x20 + 0x40),0,iVar2,*(undefined8 *)(*plVar3 + 0x3a0));
    param_1 = *(long *)(unaff_x20 + 0x48);
    if (param_1 == 0) goto LAB_01bb61b0;
    if (*(int *)(param_1 + 0x18) == 0x1e) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_01bb61b0;
      if (*(int *)(*(long *)(param_1 + 0x28) + 0x1c) == 0) goto LAB_01bb60a0;
    }
    param_2 = *(long *)(unaff_x20 + 0x40);
    if (param_2 == 0) {
LAB_01bb61b0:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
  }
  param_1 = *(long *)(unaff_x20 + 0x48);
  if (param_1 == 0) goto LAB_01bb61b0;
LAB_01bb60a0:
  if (*(int *)(param_1 + 0x18) == 0x1e) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_01bb61b0;
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x1c) == 0) {
      plVar3 = *(long **)(unaff_x20 + 0x50);
      if (plVar3 == (long *)0x0) goto LAB_01bb61b0;
      (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      plVar3 = (long *)*unaff_x19;
      if (plVar3 == (long *)0x0) {
        return;
      }
      bVar1 = *(byte *)(*unaff_x23 + 300);
      if ((bVar1 <= *(byte *)(*plVar3 + 300)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
        uVar4 = FUN_0187b304(plVar3,0);
        *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
        thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x38),uVar4);
        plVar3 = *(long **)(unaff_x20 + 0x30);
        if (plVar3 == (long *)0x0) goto LAB_01bb61b0;
      }
      lVar7 = *plVar3;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12a);
      if (uVar8 == 0) goto LAB_01bb615c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      goto LAB_01bb6144;
    }
  }
  thunk_FUN_0159f088(PTR_DAT_06da2b60);
  uVar4 = thunk_FUN_015d056c();
  FUN_011a9bc8();
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06dda1a8);
  FUN_04437484(uVar4,uVar6,0);
  uVar6 = thunk_FUN_0159f088(PTR_DAT_06dac158);
                    /* WARNING: Subroutine does not return */
  FUN_0160ee7c(uVar4,uVar6);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_01bb6144:
    if (*(long *)(piVar9 + -2) == *unaff_x22) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_01bb6188;
    }
  }
LAB_01bb615c:
  puVar5 = (undefined8 *)FUN_015c2a80(plVar3,*unaff_x22,0);
LAB_01bb6188:
  (*(code *)*puVar5)(plVar3,puVar5[1]);
  *unaff_x19 = 0;
  thunk_FUN_01656ef8();
  return;
}


