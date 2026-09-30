/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.GridSliceResizer$$ShouldResize
ENTRY_POINT: 01474a88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_GridSliceResizer__ShouldResize(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  int iVar16;
  
                    /* try { // try from 01474a8c to 01574a97 has its CatchHandler @ 01474078 */
                    /* try { // try from 01474a98 to 01574a9f has its CatchHandler @ 01474aa8 */
                    /* catch() { ... } // from try @ 01474a20 with catch @ 01474aa0 */
                    /* catch() { ... } // from try @ 01474a60 with catch @ 01474aa8
                       catch() { ... } // from try @ 01474a98 with catch @ 01474aa8 */
  if ((DAT_03776b17 & 1) == 0) {
                    /* try { // try from 01474aac to 01574c33 has its CatchHandler @ 01474aac
                       catch() { ... } // from try @ 01474aac with catch @ 01474aac
                       catch() { ... } // from try @ 01474cdc with catch @ 01474aac
                       catch() { ... } // from try @ 01474d48 with catch @ 01474aac
                       catch() { ... } // from try @ 01474d94 with catch @ 01474aac
                       catch() { ... } // from try @ 01474e08 with catch @ 01474aac
                       catch() { ... } // from try @ 01474f20 with catch @ 01474aac
                       catch() { ... } // from try @ 01475000 with catch @ 01474aac
                       catch() { ... } // from try @ 0147504c with catch @ 01474aac
                       catch() { ... } // from try @ 014750c8 with catch @ 01474aac
                       catch() { ... } // from try @ 01475154 with catch @ 01474aac */
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(UnityEngine_InputSystem_Sensor_var);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f32b0);
    DAT_03776b17 = 1;
  }
  uVar8 = FUN_026e83bc(0x20,0);
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar9 = FUN_026663fc(*(long *)(param_1 + 0x18),0);
    puVar7 = StringLiteral_302;
    puVar6 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar5 = UnityEngine_InputSystem_Sensor_var;
    puVar4 = PTR_DAT_033f32b0;
    lVar14 = *(long *)(param_1 + 0x20);
    if (lVar14 != 0) {
      uVar8 = 0;
      iVar16 = -1;
      do {
        uVar3 = *(uint *)(lVar14 + 0x18);
        if ((long)(int)uVar3 <= (long)uVar8) {
          uVar2 = 0;
          if (iVar16 + 1 < (int)uVar3) {
            uVar2 = iVar16 + 1;
          }
          if (uVar2 == 0xffffffff) {
            return;
          }
          if (uVar2 < uVar3) {
            if (*(long *)(param_1 + 0x18) == 0) break;
            FUN_026689d4(*(long *)(param_1 + 0x18),
                         *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20),0);
            if (*(long *)(param_1 + 0x18) == 0) break;
            plVar11 = (long *)FUN_026663fc(*(long *)(param_1 + 0x18),0);
            uVar9 = *(undefined8 *)puVar4;
            if (plVar11 == (long *)0x0) {
              uVar15 = 0;
            }
            else {
              uVar15 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            }
            uVar9 = FUN_015f5b28(uVar9,uVar15,0);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)puVar7);
            }
            FUN_02660dac(uVar9,0);
            plVar11 = (long *)FUN_00da4fb8(*(undefined8 *)puVar5,1);
                    /* try { // try from 01474c34 to 01574caf has its CatchHandler @ 01475058 */
            if ((*(long *)(param_1 + 0x18) == 0) ||
               (lVar14 = FUN_0268fd4c(*(long *)(param_1 + 0x18),0), plVar11 == (long *)0x0)) break;
            if ((lVar14 != 0) &&
               (lVar12 = thunk_FUN_00d6225c(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
            {
              uVar9 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
              FUN_00da5038(uVar9,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar14;
              plVar13 = *(long **)(param_1 + 0x28);
              if (plVar13 != (long *)0x0) {
                uVar8 = (**(code **)(*plVar13 + 0x298))(plVar13,plVar11,0,0,0,0,1,0);
                if ((uVar8 & 1) == 0) {
                  return;
                }
                plVar11 = *(long **)(param_1 + 0x28);
                if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01474ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar11 + 0x248))(plVar11,0,*(undefined8 *)(*plVar11 + 0x250));
                  return;
                }
              }
              break;
            }
          }
LAB_01474d08:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (uVar3 <= uVar8) goto LAB_01474d08;
        uVar15 = *(undefined8 *)(lVar14 + uVar8 * 8 + 0x20);
        if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar10 = FUN_0268b4e0(uVar15,uVar9,0);
        lVar14 = *(long *)(param_1 + 0x20);
        iVar1 = (int)uVar8;
        if ((uVar10 & 1) == 0) {
          iVar1 = iVar16;
        }
        uVar8 = uVar8 + 1;
        iVar16 = iVar1;
      } while (lVar14 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


