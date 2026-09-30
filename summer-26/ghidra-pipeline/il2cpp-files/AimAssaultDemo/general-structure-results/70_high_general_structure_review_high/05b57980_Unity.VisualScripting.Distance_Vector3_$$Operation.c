/*
FUNCTION_NAME: Unity.VisualScripting.Distance<Vector3>$$Operation
ENTRY_POINT: 05b57980
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_Distance<Vector3>__Operation(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x19;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x26;
  long in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_058ba8b0();
    if (in_stack_00000018 == 0) {
      return;
    }
    uVar2 = FUN_061492f8(in_stack_00000018,*(undefined8 *)PTR_DAT_07d98ae0,0);
    if (in_stack_00000018 != 0) {
      iVar3 = FUN_061492f8(in_stack_00000018,*(undefined8 *)PTR_DAT_07d9b400,0);
      puVar1 = PTR_DAT_07d86548;
      uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x170);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar9 = FUN_062519f8(uVar9,0);
      if (in_stack_00000018 != 0) {
        lVar4 = FUN_06147170(in_stack_00000018,*(undefined8 *)PTR_DAT_07d98ad0,uVar9,0);
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03775678(lVar10);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_037787d0(lVar4,lVar10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar4,lVar10);
          }
        }
        *(long *)(unaff_x19 + 0x30) = lVar5;
        lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_03775678(lVar10);
        }
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_037787d0(lVar4,lVar10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar4,lVar10);
          }
        }
        thunk_FUN_037aeb94((long *)(unaff_x19 + 0x30),lVar5);
        if (iVar3 == 0) {
          *(undefined8 *)(unaff_x19 + 0x10) = 0;
          thunk_FUN_037aeb94((undefined8 *)(unaff_x19 + 0x10),0);
        }
        else {
          FUN_05b5734c();
          uVar9 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x188);
          if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar9 = FUN_062519f8(uVar9,0);
          if (in_stack_00000018 == 0) goto LAB_05b57c78;
          lVar4 = FUN_06147170(in_stack_00000018,*(undefined8 *)PTR_DAT_07d9b408,uVar9,0);
          lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x148);
          if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_03775678(lVar10);
          }
          if (lVar4 == 0) {
            FUN_06263e4c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar6 = (long *)thunk_FUN_037787d0(lVar4,lVar10);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar4,lVar10);
          }
          if (0 < (int)plVar6[3]) {
            uVar8 = 0;
            plVar11 = plVar6;
            do {
              plVar11 = plVar11 + 4;
              uVar7 = (ulong)*(uint *)(plVar6 + 3);
              if (uVar7 <= uVar8) {
Unity_VisualScripting_Distance<Vector4>___ctor:
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              if (*plVar11 == 0) {
                FUN_06263e4c(0x11,0);
                uVar7 = (ulong)*(uint *)(plVar6 + 3);
              }
              if (uVar7 <= uVar8) goto Unity_VisualScripting_Distance<Vector4>___ctor;
              System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IDictionary_GetEnumerator
                        ();
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)plVar6[3]);
          }
        }
        *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
        if (*(int *)(*unaff_x26 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar4 = FUN_061df528(0);
        if (lVar4 != 0) {
          FUN_058ba65c();
          return;
        }
      }
    }
  }
LAB_05b57c78:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


