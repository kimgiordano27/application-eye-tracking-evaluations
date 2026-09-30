/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeList.Enumerator<RequestSceneHeader>$$Dispose
ENTRY_POINT: 05411054
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
Unity_Collections_LowLevel_Unsafe_UnsafeList_Enumerator<RequestSceneHeader>__Dispose
          (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long in_x9;
  int *in_x10;
  long in_x11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 *unaff_x29;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02feb5b8();
      goto FUN_05411088;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 1) * 0x10 + 0x138);
FUN_05411088:
  (*(code *)*puVar2)();
  lVar3 = FUN_02fe9340(*unaff_x29,1);
  if (lVar3 != 0) {
    if ((unaff_x23 != 0) && (lVar4 = thunk_FUN_03010710(), lVar4 == 0)) {
LAB_05411248:
      uVar6 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar6,0);
    }
    puVar1 = PTR_DAT_06f9bd40;
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_05411244:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(long *)(lVar3 + 0x20) = unaff_x23;
    thunk_FUN_03048534();
    plVar5 = (long *)FUN_02fe9340(*(undefined8 *)puVar1,1);
    uVar6 = FUN_05f89344(*(undefined8 *)(unaff_x20 + 0x28),0);
    lVar4 = FUN_05afde1c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18),0);
    if (lVar4 != 0) {
      uVar7 = FUN_05b097bc();
      uVar6 = FUN_05f8e894(uVar6,uVar7);
      if (unaff_x21 != 0) {
        FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9a8d8,0);
        lVar4 = FUN_05f88f54(uVar6);
        if (plVar5 != (long *)0x0) {
          if ((lVar4 != 0) &&
             (lVar8 = thunk_FUN_03010710(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
          goto LAB_05411248;
          if ((int)plVar5[3] == 0) goto LAB_05411244;
          plVar5[4] = lVar4;
          thunk_FUN_03048534(plVar5 + 4,lVar4);
          uVar6 = FUN_05f87cbc(lVar3,plVar5,0);
          lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e8)
                  )();
          puVar1 = PTR_DAT_06f9cc10;
          if (lVar3 != 0) {
            uVar7 = FUN_05fe4e88(lVar3,*(undefined8 *)(unaff_x21 + 0x20),0);
            uVar9 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
            FUN_05fe63bc(uVar9,uVar6,uVar7,0);
            return uVar9;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


