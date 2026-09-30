/*
FUNCTION_NAME: FUN_04c41fb8
ENTRY_POINT: 04c41fb8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04c421a0) */

void FUN_04c41fb8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_082567c5 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07d99050);
    DAT_082567c5 = 1;
  }
  lVar4 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28))(param_1);
  puVar1 = PTR_DAT_07d896f8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar5 = (long *)FUN_051395a8(lVar4,*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar2,0);
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__CopyTo:
    uVar7 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_04c42158;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar5;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c42104;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar3,0);
LAB_04c42104:
    lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_073140c8(lVar4,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04c42174;
    }
  }
LAB_04c42158:
  puVar6 = (undefined8 *)FUN_0377596c(plVar5,*(long *)puVar1,0);
LAB_04c42174:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


