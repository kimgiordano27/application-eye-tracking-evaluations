/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsJsonParser$$TryParseArray
ENTRY_POINT: 067756b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsJsonParser__TryParseArray(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uStack0000000000000000;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  
  uStack0000000000000000 = param_1;
  if (unaff_x19 != 0) {
    *(undefined4 *)(unaff_x19 + 0x30) = in_stack_00000008;
    *(undefined8 *)(unaff_x19 + 0x28) = param_1;
    FUN_06775524();
    FUN_06775524();
    lVar7 = *(long *)(unaff_x21 + 0x68);
    if (lVar7 == 0) {
      return;
    }
    uVar8 = *(undefined4 *)(unaff_x19 + 0x28);
    uVar9 = *(undefined4 *)(unaff_x19 + 0x2c);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x30);
    plVar3 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,4);
    if ((unaff_x24 != 0) && (plVar3 != (long *)0x0)) {
      lVar6 = *(long *)(unaff_x24 + 0x48);
      if ((lVar6 != 0) &&
         (lVar4 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0)) {
LAB_067758cc:
        uVar5 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                          ();
                    /* WARNING: Subroutine does not return */
        FUN_02fe93c0(uVar5,0);
      }
      if ((int)plVar3[3] != 0) {
        plVar3[4] = lVar6;
        thunk_FUN_03048534(plVar3 + 4,lVar6);
        if (unaff_x23 == 0) goto LAB_067758c8;
        lVar6 = *(long *)(unaff_x23 + 0x48);
        if ((lVar6 != 0) &&
           (lVar4 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
        goto LAB_067758cc;
        if (1 < *(uint *)(plVar3 + 3)) {
          plVar3[5] = lVar6;
          thunk_FUN_03048534(plVar3 + 5,lVar6);
          if (unaff_x22 == 0) goto LAB_067758c8;
          lVar6 = *(long *)(unaff_x22 + 0x48);
          if ((lVar6 != 0) &&
             (lVar4 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
          goto LAB_067758cc;
          if (2 < *(uint *)(plVar3 + 3)) {
            plVar3[6] = lVar6;
            thunk_FUN_03048534(plVar3 + 6,lVar6);
            if (unaff_x20 == 0) goto LAB_067758c8;
            lVar6 = *(long *)(unaff_x20 + 0x48);
            if ((lVar6 != 0) &&
               (lVar4 = thunk_FUN_03010710(lVar6,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
            goto LAB_067758cc;
            puVar2 = PTR_DAT_06f6d918;
            if (3 < *(uint *)(plVar3 + 3)) {
              plVar3[7] = lVar6;
              thunk_FUN_03048534(plVar3 + 7,lVar6);
              lVar6 = FUN_02fe9340(*(undefined8 *)puVar2,4);
              if (lVar6 == 0) goto LAB_067758c8;
              uVar1 = *(uint *)(lVar6 + 0x18);
              if ((((uVar1 != 0) &&
                   (*(undefined4 *)(lVar6 + 0x20) = uStack000000000000001c, uVar1 != 1)) &&
                  (*(undefined4 *)(lVar6 + 0x24) = uStack0000000000000018, 2 < uVar1)) &&
                 (*(undefined4 *)(lVar6 + 0x28) = uStack0000000000000014, uVar1 != 3)) {
                *(undefined4 *)(lVar6 + 0x2c) = uStack0000000000000010;
                uVar5 = (**(code **)(lVar7 + 0x18))
                                  (uVar8,uVar9,uVar10,*(undefined8 *)(lVar7 + 0x40),plVar3,lVar6,
                                   *(undefined8 *)(lVar7 + 0x28));
                *(undefined8 *)(unaff_x19 + 0x48) = uVar5;
                thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x48),uVar5);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
  }
LAB_067758c8:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


