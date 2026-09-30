/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian$$Start
ENTRY_POINT: 06ded314
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x06ded7c4) */

undefined8 Meta_XR_MRUtilityKit_RoomGuardian__Start(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  char cStack000000000000001c;
  
  if ((DAT_09419e15 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e912a8);
    FUN_03c8f898(PTR_DAT_08e91db0);
    FUN_03c8f898(PTR_DAT_08e91db8);
    FUN_03c8f898(PTR_DAT_08e82378);
    FUN_03c8f898(PTR_DAT_08e91328);
    FUN_03c8f898(PTR_DAT_08e91dc0);
    FUN_03c8f898(PTR_DAT_08e91dc8);
    FUN_03c8f898(PTR_DAT_08e91dd0);
    FUN_03c8f898(PTR_DAT_08e91cf0);
    DAT_09419e15 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    cStack000000000000001c = '\0';
    FUN_0716f8f0(uVar11,&stack0x0000001c,0);
    if (*(long *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    uVar5 = FUN_06a4e598(*(long *)(param_1 + 0x68),param_2,*(undefined8 *)PTR_DAT_08e91db0);
    if ((uVar5 & 1) == 0) {
      lVar9 = *param_2;
      lVar13 = *(long *)(param_1 + 0x68);
      uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar5 != 0) {
        piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91328) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_06ded444;
          }
          uVar5 = uVar5 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08e91328,0);
LAB_06ded444:
      uVar7 = (*(code *)*puVar6)(param_2,puVar6[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30(uVar7,uVar7);
      }
      FUN_06a4e36c(lVar13,uVar7,param_2,*(undefined8 *)PTR_DAT_08e91db8);
      iVar4 = 5;
    }
    else {
      iVar4 = 4;
    }
    if (cStack000000000000001c != '\0') {
      thunk_FUN_03cdf404(uVar11,0);
    }
    if ((iVar4 == 5) || (iVar4 == 0)) {
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar3 = FUN_06deecc4();
        puVar2 = PTR_DAT_08e91328;
        lVar9 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e91328) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
              goto LAB_06ded50c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)PTR_DAT_08e91328,7);
LAB_06ded50c:
        (*(code *)*puVar6)(param_2,uVar3,puVar6[1]);
        lVar9 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x15) * 0x10 + 0x138);
              goto LAB_06ded56c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,0x15);
LAB_06ded56c:
        uVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
        puVar1 = PTR_DAT_08e912a8;
        uVar7 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e912a8);
        System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                  (uVar7,param_1,*(undefined8 *)PTR_DAT_08e91dc0,0);
        lVar9 = FUN_0714874c(uVar11,uVar7,0);
        lVar13 = *(long *)puVar2;
        if (lVar9 == 0) {
          lVar8 = 0;
        }
        else {
          uVar11 = *(undefined8 *)puVar1;
          lVar8 = thunk_FUN_03cf5138(lVar9,uVar11);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03c8fecc(lVar9,uVar11);
          }
        }
        lVar9 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar5 != 0) {
          piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar13) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0x16) * 0x10 + 0x138);
              goto LAB_06ded63c;
            }
            uVar5 = uVar5 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03cf1348(param_2,lVar13,0x16);
LAB_06ded63c:
        (*(code *)*puVar6)(param_2,lVar8,puVar6[1]);
        plVar12 = *(long **)(param_1 + 0x60);
        uVar11 = FUN_06f6be0c(*(undefined8 *)PTR_DAT_08e91dc8,param_2,0);
        if (plVar12 != (long *)0x0) {
          lVar9 = *plVar12;
          uVar7 = *(undefined8 *)PTR_DAT_08e91dd0;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          uVar14 = *(undefined8 *)PTR_DAT_08e91cf0;
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_08e82378) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 7) * 0x10 + 0x138);
                goto LAB_06ded6e0;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(plVar12,*(long *)PTR_DAT_08e82378,7);
LAB_06ded6e0:
          (*(code *)*puVar6)(plVar12,uVar11,0,0,0,0,uVar7,uVar14);
          lVar9 = *param_2;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_06ded764;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_03cf1348(param_2,*(long *)puVar2,2);
LAB_06ded764:
          uVar11 = (*(code *)*puVar6)(param_2,puVar6[1]);
          iVar4 = FUN_06deec30(param_1,uVar11);
          if ((iVar4 != 0) && (lVar9 = *(long *)(param_1 + 0x98), lVar9 != 0)) {
            (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),uVar11,param_2,*(undefined8 *)(lVar9 + 0x28));
          }
          return 1;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
  }
  return 0;
}


