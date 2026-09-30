/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameSize
ENTRY_POINT: 01a40140
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_Media__SetMrcFrameSize(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x21;
  uint uVar9;
  
  thunk_FUN_00d48444(System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo);
  thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xc2f) = 1;
  uVar7 = *(undefined8 *)(unaff_x19 + 0x78);
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar2 = FUN_0268b4e0(uVar7,0,0);
  puVar1 = System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo;
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  lVar5 = *(long *)(unaff_x19 + 0x78);
  if ((lVar5 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x80), plVar8 != (long *)0x0)) {
    lVar4 = *plVar8;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_01a401f4;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_00d59724(plVar8,*(long *)
                                  System_Collections_Generic_IEnumerable<IDebugManager>_TypeInfo,1);
LAB_01a401f4:
    (*(code *)*puVar3)(plVar8,lVar5 + 0x24,puVar3[1]);
    lVar5 = *(long *)(unaff_x19 + 0x78);
    if ((lVar5 != 0) && (plVar8 = *(long **)(unaff_x19 + 0x88), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12a);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)StringLiteral_13710) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_01a40270;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)StringLiteral_13710,1);
LAB_01a40270:
      (*(code *)*puVar3)(plVar8,lVar5 + 0x18,puVar3[1]);
      uVar9 = 0;
      while (lVar5 = *(long *)(unaff_x19 + 0x98), lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar4 = *(long *)(unaff_x19 + 0x78);
        if ((lVar4 == 0) ||
           (plVar8 = *(long **)(lVar5 + (long)(int)uVar9 * 8 + 0x20), plVar8 == (long *)0x0)) break;
        lVar5 = *plVar8;
        uVar2 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 1) * 0x10 + 0x138);
              goto LAB_01a40300;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_00d59724(plVar8,*(long *)puVar1,1);
LAB_01a40300:
        (*(code *)*puVar3)(plVar8,lVar4 + 0x30,puVar3[1]);
        uVar9 = uVar9 + 1;
        if (uVar9 == 0x1a) {
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


