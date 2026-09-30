/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<RequestSceneHeader>$$Dispose
ENTRY_POINT: 05411118
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<RequestSceneHeader>__Dispose(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x26;
  
  lVar2 = FUN_05afde1c(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    FUN_05b097bc();
    uVar3 = FUN_05f8e894();
    if (unaff_x21 != 0) {
      FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9a8d8,0);
      lVar2 = FUN_05f88f54(uVar3);
      if (unaff_x26 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar4 = thunk_FUN_03010710(lVar2,*(undefined8 *)(*unaff_x26 + 0x40)), lVar4 == 0)) {
          uVar3 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                            ();
                    /* WARNING: Subroutine does not return */
          FUN_02fe93c0(uVar3,0);
        }
        if ((int)unaff_x26[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        unaff_x26[4] = lVar2;
        thunk_FUN_03048534(unaff_x26 + 4,lVar2);
        uVar3 = FUN_05f87cbc();
        lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e8))
                          ();
        puVar1 = PTR_DAT_06f9cc10;
        if (lVar2 != 0) {
          uVar5 = FUN_05fe4e88(lVar2,*(undefined8 *)(unaff_x21 + 0x20),0);
          uVar6 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
          FUN_05fe63bc(uVar6,uVar3,uVar5,0);
          return uVar6;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


