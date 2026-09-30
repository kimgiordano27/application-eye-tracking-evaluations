/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$Unity.Serialization.Binary.IBinaryAdapter<Unity.Entities.UntypedUnityObjectRef>.Serialize
ENTRY_POINT: 06406f48
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Unity_Entities_Serialization_ManagedObjectBinaryWriter__Unity_Serialization_Binary_IBinaryAdapter<Unity_Entities_UntypedUnityObjectRef>_Serialize
               (undefined8 param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_030b6e08(param_1);
  }
  plVar2 = (long *)__cxa_begin_catch(param_1);
  uVar3 = thunk_FUN_03037804(PTR_DAT_06f9b690);
  uVar4 = thunk_FUN_03033334(uVar3,*(undefined8 *)*plVar2);
  if ((uVar4 & 1) == 0) {
    uVar3 = thunk_FUN_03037804(PTR_DAT_06f6d5c8);
    uVar4 = thunk_FUN_03033334(uVar3,*(undefined8 *)*plVar2);
    if ((uVar4 & 1) == 0) {
      plVar6 = (long *)__cxa_allocate_exception(8);
      *plVar6 = *plVar2;
                    /* WARNING: Subroutine does not return */
      RootMotion_Demos_PickUp2Handed__get_holdingLeft(plVar6,&PTR_PTR_06b7e988,0);
    }
    __cxa_end_catch();
  }
  else {
    lVar7 = *plVar2;
    __cxa_end_catch();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    plVar2 = *(long **)(lVar7 + 0x28);
    lVar7 = thunk_FUN_03037804(PTR_DAT_06fa3300);
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(lVar7 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) == lVar7))
      {
        plVar2 = (long *)plVar2[5];
        lVar7 = thunk_FUN_03037804(PTR_DAT_06f94be8);
        if (plVar2 != (long *)0x0) {
          if (((*(byte *)(lVar7 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
              (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(lVar7 + 0x130) * 8 + -8) ==
               lVar7)) && (iVar1 = FUN_06373908(plVar2,0), iVar1 == 0x274c)) {
            thunk_FUN_03037804(PTR_DAT_06f9b690);
            uVar3 = thunk_FUN_0301080c();
            uVar5 = thunk_FUN_03037804(PTR_DAT_06f9b698);
            FUN_0640d094(uVar3,uVar5,0xe,0);
            FUN_0640762c();
          }
        }
      }
    }
  }
  FUN_0640762c();
  return;
}


