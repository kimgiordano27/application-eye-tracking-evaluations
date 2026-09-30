/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<RequestSceneHeader>$$.ctor
ENTRY_POINT: 05410f58
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 Unity_Collections_NativeArray_Enumerator<RequestSceneHeader>___ctor(code *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x27;
  long *unaff_x29;
  
  (*param_1)();
  lVar9 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x29) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05410fac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05410fac:
  (*(code *)*puVar2)();
  lVar9 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_05411008;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8();
LAB_05411008:
  puVar1 = PTR_DAT_06f9abd0;
  (*(code *)*puVar2)();
  FUN_05f7c7ec();
  lVar9 = *unaff_x24;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x27) {
        puVar2 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
        goto FUN_05411088;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar2 = (undefined8 *)FUN_02feb5b8();
FUN_05411088:
  (*(code *)*puVar2)();
  lVar9 = FUN_02fe9340(*(undefined8 *)puVar1,1);
  if (lVar9 != 0) {
    if ((unaff_x23 != 0) && (lVar3 = thunk_FUN_03010710(), lVar3 == 0)) {
LAB_05411248:
      uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar5,0);
    }
    puVar1 = PTR_DAT_06f9bd40;
    if (*(int *)(lVar9 + 0x18) == 0) {
LAB_05411244:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(long *)(lVar9 + 0x20) = unaff_x23;
    thunk_FUN_03048534();
    plVar4 = (long *)FUN_02fe9340(*(undefined8 *)puVar1,1);
    uVar5 = FUN_05f89344(*(undefined8 *)(unaff_x20 + 0x28),0);
    lVar3 = FUN_05afde1c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x18),0);
    if (lVar3 != 0) {
      uVar6 = FUN_05b097bc();
      uVar5 = FUN_05f8e894(uVar5,uVar6);
      if (unaff_x21 != 0) {
        FUN_05afde1c(*(undefined8 *)PTR_DAT_06f9a8d8,0);
        lVar3 = FUN_05f88f54(uVar5);
        if (plVar4 != (long *)0x0) {
          if ((lVar3 != 0) &&
             (lVar7 = thunk_FUN_03010710(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
          goto LAB_05411248;
          if ((int)plVar4[3] == 0) goto LAB_05411244;
          plVar4[4] = lVar3;
          thunk_FUN_03048534(plVar4 + 4,lVar3);
          uVar5 = FUN_05f87cbc(lVar9,plVar4,0);
          lVar9 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1e8)
                  )();
          puVar1 = PTR_DAT_06f9cc10;
          if (lVar9 != 0) {
            uVar6 = FUN_05fe4e88(lVar9,*(undefined8 *)(unaff_x21 + 0x20),0);
            uVar8 = thunk_FUN_0301080c(*(undefined8 *)puVar1);
            FUN_05fe63bc(uVar8,uVar5,uVar6,0);
            return uVar8;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


