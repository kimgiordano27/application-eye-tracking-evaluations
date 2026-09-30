/*
FUNCTION_NAME: FUN_05b578d4
ENTRY_POINT: 05b578d4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05b578d4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  
  puVar3 = PTR_DAT_07d98ab0;
  if ((DAT_082598cf & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d9b410);
    FUN_0373b518(PTR_DAT_07d9b418);
    FUN_0373b518(PTR_DAT_07d98ab0);
    FUN_0373b518(PTR_DAT_07d9b400);
    FUN_0373b518(PTR_DAT_07d98ad0);
    FUN_0373b518(PTR_DAT_07d9b408);
    FUN_0373b518(PTR_DAT_07d98ae0);
    DAT_082598cf = 1;
  }
  local_78 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar6 = FUN_061df528(0);
  if (lVar6 != 0) {
    FUN_058ba8b0(lVar6,param_1,&local_78,*(undefined8 *)PTR_DAT_07d9b418);
    if (local_78 == 0) {
      return;
    }
    uVar4 = FUN_061492f8(local_78,*(undefined8 *)PTR_DAT_07d98ae0,0);
    if (local_78 != 0) {
      iVar5 = FUN_061492f8(local_78,*(undefined8 *)PTR_DAT_07d9b400,0);
      lVar6 = local_78;
      puVar2 = PTR_DAT_07d86548;
      uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x170);
      if (*(int *)(*(long *)(PTR_DAT_07d86548 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_03798b70(*(long *)(PTR_DAT_07d86548 + 0xe0));
      }
      uVar11 = FUN_062519f8(uVar11,0);
      if (lVar6 != 0) {
        lVar6 = FUN_06147170(lVar6,*(undefined8 *)PTR_DAT_07d98ad0,uVar11,0);
        lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03775678(lVar12);
        }
        if (lVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_037787d0(lVar6,lVar12);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar6,lVar12);
          }
        }
        *(long *)(param_1 + 0x30) = lVar7;
        lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 8);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_03775678(lVar12);
        }
        if (lVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = thunk_FUN_037787d0(lVar6,lVar12);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar6,lVar12);
          }
        }
        thunk_FUN_037aeb94((long *)(param_1 + 0x30),lVar7);
        if (iVar5 == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x10),0);
        }
        else {
          FUN_05b5734c(param_1,iVar5,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
          lVar6 = local_78;
          uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188);
          if (*(int *)(*(long *)(puVar2 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_03798b70();
          }
          uVar11 = FUN_062519f8(uVar11,0);
          if (lVar6 == 0) goto LAB_05b57c78;
          lVar6 = FUN_06147170(lVar6,*(undefined8 *)PTR_DAT_07d9b408,uVar11,0);
          lVar12 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_03775678(lVar12);
          }
          if (lVar6 == 0) {
            FUN_06263e4c(0x10,0);
                    /* WARNING: Subroutine does not return */
            FUN_0373b7b4();
          }
          plVar8 = (long *)thunk_FUN_037787d0(lVar6,lVar12);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0373bb54(lVar6,lVar12);
          }
          if (0 < (int)plVar8[3]) {
            uVar10 = 0;
            plVar1 = plVar8;
            do {
              plVar13 = plVar1 + 4;
              uVar9 = (ulong)*(uint *)(plVar8 + 3);
              if (uVar9 <= uVar10) {
Unity_VisualScripting_Distance<Vector4>___ctor:
                    /* WARNING: Subroutine does not return */
                FUN_0373b7bc();
              }
              if (*plVar13 == 0) {
                FUN_06263e4c(0x11,0);
                uVar9 = (ulong)*(uint *)(plVar8 + 3);
              }
              if (uVar9 <= uVar10) goto Unity_VisualScripting_Distance<Vector4>___ctor;
              local_60 = plVar1[7];
              lStack_68 = plVar1[6];
              local_70 = plVar1[5];
              System_Collections_Generic_Dictionary<OVRAnchor_Telemetry_Key,_OVRTelemetryMarker>__System_Collections_IDictionary_GetEnumerator
                        (param_1,*plVar13,&local_70,2,
                         *(undefined8 *)
                          (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0)
                                                        + 0x80) + 0x20) + 0xc0) + 0x118));
              uVar10 = uVar10 + 1;
              plVar1 = plVar13;
            } while ((long)uVar10 < (long)(int)plVar8[3]);
          }
        }
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        lVar6 = FUN_061df528(0);
        if (lVar6 != 0) {
          FUN_058ba65c(lVar6,param_1,*(undefined8 *)PTR_DAT_07d9b410);
          return;
        }
      }
    }
  }
LAB_05b57c78:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


