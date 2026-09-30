/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$.ctor
ENTRY_POINT: 01bb604c
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader___ctor(long param_1,int param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
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
  
  while( true ) {
    if (param_1 != 0) {
      FUN_01bb64e4();
    }
    plVar2 = *(long **)(unaff_x20 + 0x50);
    if (plVar2 == (long *)0x0) goto LAB_01bb61b0;
    (**(code **)(*plVar2 + 0x398))
              (plVar2,*(undefined8 *)(unaff_x20 + 0x40),0,param_2,*(undefined8 *)(*plVar2 + 0x3a0));
    lVar3 = *(long *)(unaff_x20 + 0x48);
    if (lVar3 == 0) goto LAB_01bb61b0;
    if (*(int *)(lVar3 + 0x18) == 0x1e) {
      if (*(long *)(lVar3 + 0x28) == 0) goto LAB_01bb61b0;
      if (*(int *)(*(long *)(lVar3 + 0x28) + 0x1c) == 0) goto LAB_01bb60a0;
    }
    lVar7 = *(long *)(unaff_x20 + 0x40);
    if (lVar7 == 0) goto LAB_01bb61b0;
    param_2 = FUN_01bb8300(lVar3,lVar7,0,*(undefined4 *)(lVar7 + 0x18));
    if (param_2 < 1) break;
    param_1 = *unaff_x19;
  }
  lVar3 = *(long *)(unaff_x20 + 0x48);
  if (lVar3 != 0) {
LAB_01bb60a0:
    if (*(int *)(lVar3 + 0x18) != 0x1e) {
LAB_01bb61b4:
      thunk_FUN_0159f088(PTR_DAT_06da2b60);
      uVar4 = thunk_FUN_015d056c();
      FUN_011a9bc8();
      uVar6 = thunk_FUN_0159f088(PTR_DAT_06dda1a8);
      FUN_04437484(uVar4,uVar6,0);
      uVar6 = thunk_FUN_0159f088(PTR_DAT_06dac158);
                    /* WARNING: Subroutine does not return */
      FUN_0160ee7c(uVar4,uVar6);
    }
    if (*(long *)(lVar3 + 0x28) != 0) {
      if (*(int *)(*(long *)(lVar3 + 0x28) + 0x1c) != 0) goto LAB_01bb61b4;
      plVar2 = *(long **)(unaff_x20 + 0x50);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
        plVar2 = (long *)*unaff_x19;
        if (plVar2 == (long *)0x0) {
          return;
        }
        bVar1 = *(byte *)(*unaff_x23 + 300);
        if ((bVar1 <= *(byte *)(*plVar2 + 300)) &&
           (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x23)) {
          uVar4 = FUN_0187b304(plVar2,0);
          *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
          thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x38),uVar4);
          plVar2 = *(long **)(unaff_x20 + 0x30);
          if (plVar2 == (long *)0x0) goto LAB_01bb61b0;
        }
        lVar3 = *plVar2;
        uVar8 = (ulong)*(ushort *)(lVar3 + 0x12a);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *unaff_x22) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_01bb6188;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_015c2a80(plVar2,*unaff_x22,0);
LAB_01bb6188:
        (*(code *)*puVar5)(plVar2,puVar5[1]);
        *unaff_x19 = 0;
        thunk_FUN_01656ef8();
        return;
      }
    }
  }
LAB_01bb61b0:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


