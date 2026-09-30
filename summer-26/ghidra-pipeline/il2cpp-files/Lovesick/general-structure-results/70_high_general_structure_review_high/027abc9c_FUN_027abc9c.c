/*
FUNCTION_NAME: FUN_027abc9c
ENTRY_POINT: 027abc9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_027abc9c(long param_1,long *param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *local_50;
  undefined8 uStack_48;
  
  if ((DAT_037887b8 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Xml_Linq_XElement__ctor__);
    thunk_FUN_00d48444(
                      Method_FullSerializer_fsMetaType_<>c__DisplayClass7_0_<CanSerializeProperty>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_set_Item__
                      );
    DAT_037887b8 = 1;
  }
  puVar2 = Method_FullSerializer_fsMetaType_<>c__DisplayClass7_0_<CanSerializeProperty>b__1__;
  puVar1 = Method_System_Xml_Linq_XElement__ctor__;
  if (param_2 != (long *)0x0) {
    FUN_027fbaf0(param_2,0);
    lVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar2);
    }
    lVar5 = FUN_012c4efc(*(undefined8 *)puVar1);
    if (lVar4 == lVar5) {
      lVar4 = FUN_027fb064(param_2,0);
      if (lVar4 == 0) goto LAB_027abdf8;
      iVar3 = FUN_026d8144(lVar4,0);
      if (iVar3 == 7) {
        return;
      }
    }
    if (((*(char *)(param_1 + 0x40) != '\0') || (param_4 == 2)) || (*(int *)(param_1 + 0x30) == 0))
    {
      FUN_027abdfc(param_1,param_2,param_3);
      return;
    }
    (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
    if (*(long *)(param_1 + 0x20) != 0) {
      local_50 = param_2;
      uStack_48 = param_3;
      FUN_013757d8(*(long *)(param_1 + 0x20),&local_50,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<PlayerPlatform,_Quaternion>_set_Item__
                  );
      return;
    }
  }
LAB_027abdf8:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


