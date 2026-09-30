/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<RequestSceneHeader>$$.ctor
ENTRY_POINT: 05411100
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<RequestSceneHeader>___ctor(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x26;
  
  uVar2 = FUN_05f89344(param_1);
  lVar3 = FUN_05afde1c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18),0);
  if (lVar3 != 0) {
    uVar4 = FUN_05b097bc();
    uVar2 = FUN_05f8e894(uVar2,uVar4);
    if (unaff_x21 != 0) {
      FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9a8d8,0);
      lVar3 = FUN_05f88f54(uVar2);
      if (unaff_x26 != (long *)0x0) {
        if ((lVar3 != 0) &&
           (lVar5 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*unaff_x26 + 0x40)), lVar5 == 0)) {
          uVar2 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar2,0);
        }
        if ((int)unaff_x26[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        unaff_x26[4] = lVar3;
        thunk_FUN_03048534(unaff_x26 + 4,lVar3);
        uVar2 = FUN_05f87cbc();
        lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e8))
                          ();
        puVar1 = PTR_DAT_06f9cc10;
        if (lVar3 != 0) {
          uVar4 = FUN_05fe4e88(lVar3,*(undefined8 *)(unaff_x21 + 0x20),0);
          uVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_05fe63bc(uVar6,uVar2,uVar4,0);
          return uVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


