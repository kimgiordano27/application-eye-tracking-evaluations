/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04c41150
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c41308) */

void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(PTR_DAT_07d99050);
                    /* try { // try from 04c41184 to 04d41187 has its CatchHandler @ 04c41190 */
                    /* try { // try from 04c41188 to 04d411b3 has its CatchHandler @ 04c40d04 */
    *(undefined1 *)(unaff_x20 + 0x7bc) = 1;
  }
  puVar1 = PTR_DAT_07d896f8;
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c41184 with catch @ 04c41190
                        */
  if (*(long *)(unaff_x19 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c410b8 with catch @ 04c41194
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c41004 with catch @ 04c41198
                        */
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c41044 with catch @ 04c4119c
                        */
  plVar4 = (long *)FUN_051395a8(*(long *)(unaff_x19 + 0x98),*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar6 = *plVar4;
                    /* catch() { ... } // from try @ 04c411b4 with catch @ 04c411cc */
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04c41210;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,0);
LAB_04c41210:
    uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_04c412c0;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar3,0);
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Equals:
    lVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    FUN_073140c8(lVar6,0);
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_04c412dc;
    }
  }
LAB_04c412c0:
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,0);
LAB_04c412dc:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


