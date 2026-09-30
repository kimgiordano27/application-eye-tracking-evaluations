/*
FUNCTION_NAME: FUN_0198cc2c
ENTRY_POINT: 0198cc2c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0198cc2c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong local_70 [3];
  undefined4 local_58;
  
  puVar1 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                    /* try { // try from 0198cc30 to 01a8cc3b has its CatchHandler @ 0198cc50 */
                    /* try { // try from 0198cc3c to 01a8cc47 has its CatchHandler @ 0198c96c */
                    /* try { // try from 0198cc48 to 01a8cc4f has its CatchHandler @ 0198cc50 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0198cc30 with catch @ 0198cc50
                       catch(type#2 @ 00000000) { ... } // from try @ 0198cc48 with catch @ 0198cc50
                        */
                    /* try { // try from 0198cc5c to 01a8ccd3 has its CatchHandler @ 0198cc5c
                       catch() { ... } // from try @ 0198cc5c with catch @ 0198cc5c
                       catch() { ... } // from try @ 0198cdd8 with catch @ 0198cc5c
                       catch() { ... } // from try @ 0198ce38 with catch @ 0198cc5c
                       catch() { ... } // from try @ 0198ce9c with catch @ 0198cc5c
                       catch() { ... } // from try @ 0198cef0 with catch @ 0198cc5c */
  if ((DAT_0377a424 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                      );
    thunk_FUN_00d48444(Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<Decimal>_GetValueOrDefault__);
    DAT_0377a424 = 1;
  }
  local_70[1] = 0;
  local_70[2] = 0;
  local_70[0] = 0;
  local_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_02681b9c(param_2,0,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x1f8) != 0) {
                    /* try { // try from 0198ccd4 to 01a8cce3 has its CatchHandler @ 0198ce48 */
      uVar3 = FUN_0198a78c(*(long *)(param_1 + 0x1f8),param_2,local_70);
      puVar1 = 
      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
      ;
      if ((uVar3 & 1) == 0) goto LAB_0198cf2c;
      if ((param_2 != 0) && (plVar7 = *(long **)(param_2 + 200), plVar7 != (long *)0x0)) {
                    /* try { // try from 0198ccf0 to 01a8cd07 has its CatchHandler @ 0198ce4c */
        lVar5 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) ==
                *(long *)
                 Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
               ) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0198cd40;
            }
            uVar3 = uVar3 - 1;
                    /* try { // try from 0198cd1c to 01a8cd23 has its CatchHandler @ 0198ce44 */
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)
                 FUN_00d59724(plVar7,*(long *)
                                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<InputDeviceCommandDelegate>_RemoveCallback__
                              ,0);
LAB_0198cd40:
        plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
        puVar2 = Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__;
        if (plVar7 != (long *)0x0) {
                    /* try { // try from 0198cd50 to 01a8cd57 has its CatchHandler @ 0198ce68 */
          lVar5 = *plVar7;
                    /* try { // try from 0198cd60 to 01a8cd6b has its CatchHandler @ 0198ce5c */
          uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
          if (uVar3 != 0) {
                    /* try { // try from 0198cd70 to 01a8cd7b has its CatchHandler @ 0198ce64 */
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) ==
                  *(long *)
                   Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0198cda8;
              }
              uVar3 = uVar3 - 1;
                    /* try { // try from 0198cd84 to 01a8cd8f has its CatchHandler @ 0198ce58 */
              piVar6 = piVar6 + 4;
            } while (uVar3 != 0);
          }
                    /* try { // try from 0198cd90 to 01a8cd9f has its CatchHandler @ 0198ce60 */
          puVar4 = (undefined8 *)
                   FUN_00d59724(plVar7,*(long *)
                                        Method_Meta_XR_MRUtilityKit_SceneDebugger_DebugDestructibleMeshComponent__
                                ,0);
LAB_0198cda8:
                    /* try { // try from 0198cdb0 to 01a8cdb7 has its CatchHandler @ 0198ce40 */
          lVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
          if (lVar5 != 0) {
            uVar9 = *(undefined4 *)(param_1 + 0x134);
            uVar10 = *(undefined4 *)(param_1 + 0x138);
            uVar8 = FUN_026a0f08(*(undefined4 *)(param_1 + 0x130),lVar5,0);
            *(undefined4 *)(param_1 + 400) = uVar8;
                    /* try { // try from 0198cdd0 to 01a8cdd7 has its CatchHandler @ 0198ce3c */
            *(undefined4 *)(param_1 + 0x194) = uVar9;
            *(undefined4 *)(param_1 + 0x198) = uVar10;
                    /* try { // try from 0198cdd8 to 01a8ce27 has its CatchHandler @ 0198cc5c */
            *(undefined4 *)(param_1 + 0x19c) = uVar8;
            *(undefined4 *)(param_1 + 0x1a0) = uVar9;
            *(undefined4 *)(param_1 + 0x1a4) = uVar10;
            *(undefined4 *)(param_1 + 0x184) = uVar8;
            *(undefined4 *)(param_1 + 0x188) = uVar9;
            *(undefined4 *)(param_1 + 0x18c) = uVar10;
            *(undefined4 *)(param_1 + 0x178) = uVar8;
            *(undefined4 *)(param_1 + 0x17c) = uVar9;
            *(undefined4 *)(param_1 + 0x180) = uVar10;
            plVar7 = *(long **)(param_2 + 200);
            if (plVar7 != (long *)0x0) {
              lVar5 = *plVar7;
              uVar11 = local_70[0] & 0xffffffff;
              uVar8 = (undefined4)(local_70[0] >> 0x20);
              uVar9 = (undefined4)local_70[1];
              uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                do {
                    /* try { // try from 0198ce28 to 01a8ce2b has its CatchHandler @ 0198ce4c */
                    /* try { // try from 0198ce2c to 01a8ce2f has its CatchHandler @ 0198ce38 */
                  if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
                    /* catch() { ... } // from try @ 0198ccf0 with catch @ 0198ce4c
                       catch() { ... } // from try @ 0198ce28 with catch @ 0198ce4c */
                    puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_0198ce58;
                  }
                    /* try { // try from 0198ce30 to 01a8ce37 has its CatchHandler @ 0198ce40 */
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 4;
                    /* catch() { ... } // from try @ 0198ce2c with catch @ 0198ce38
                       try { // try from 0198ce38 to 01a8ce77 has its CatchHandler @ 0198cc5c */
                } while (uVar3 != 0);
              }
                    /* catch() { ... } // from try @ 0198cdd0 with catch @ 0198ce3c */
                    /* catch() { ... } // from try @ 0198cdb0 with catch @ 0198ce40
                       catch() { ... } // from try @ 0198ce30 with catch @ 0198ce40 */
                    /* catch() { ... } // from try @ 0198cd1c with catch @ 0198ce44 */
              puVar4 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar1,0);
                    /* catch() { ... } // from try @ 0198ccd4 with catch @ 0198ce48 */
LAB_0198ce58:
                    /* catch() { ... } // from try @ 0198cd84 with catch @ 0198ce58 */
                    /* catch() { ... } // from try @ 0198cd60 with catch @ 0198ce5c */
                    /* catch() { ... } // from try @ 0198cd90 with catch @ 0198ce60 */
              plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
                    /* catch() { ... } // from try @ 0198cd70 with catch @ 0198ce64 */
              if (plVar7 != (long *)0x0) {
                    /* catch() { ... } // from try @ 0198cd50 with catch @ 0198ce68 */
                lVar5 = *plVar7;
                uVar3 = (ulong)*(ushort *)(lVar5 + 0x12a);
                    /* try { // try from 0198ce78 to 01a8ce7b has its CatchHandler @ 0198cecc */
                if (uVar3 != 0) {
                  piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    /* try { // try from 0198ceb4 to 01a8ceb7 has its CatchHandler @ 0198ced8 */
                      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_0198ceb8;
                    }
                    uVar3 = uVar3 - 1;
                    /* try { // try from 0198ce94 to 01a8ce9b has its CatchHandler @ 0198cf04 */
                    piVar6 = piVar6 + 4;
                  } while (uVar3 != 0);
                }
                    /* try { // try from 0198ce9c to 01a8ceb3 has its CatchHandler @ 0198cc5c */
                puVar4 = (undefined8 *)FUN_00d59724(plVar7,*(long *)puVar2,0);
LAB_0198ceb8:
                lVar5 = (*(code *)*puVar4)(plVar7,puVar4[1]);
                    /* try { // try from 0198cec4 to 01a8ceef has its CatchHandler @ 0198cf04 */
                if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 0198ce78 with catch @ 0198cecc */
                    /* catch() { ... } // from try @ 0198ceb4 with catch @ 0198ced8 */
                  uVar10 = FUN_026a0f08(uVar11,lVar5,0);
                  *(undefined4 *)(param_1 + 0x1c0) = uVar10;
                  *(undefined4 *)(param_1 + 0x1c4) = uVar8;
                  *(undefined4 *)(param_1 + 0x1c8) = uVar9;
                    /* try { // try from 0198cef0 to 01a8cefb has its CatchHandler @ 0198cc5c */
                  if ((*(long *)(param_2 + 0xf0) != 0) && (*(long *)(param_1 + 0x1b0) != 0)) {
                    /* try { // try from 0198cefc to 01a8cf03 has its CatchHandler @ 0198cf04 */
                    OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty__Invoke
                              (*(long *)(param_1 + 0x1b0),
                               *(undefined8 *)(*(long *)(param_2 + 0xf0) + 0x20),0);
                    /* catch() { ... } // from try @ 0198ce94 with catch @ 0198cf04
                       catch() { ... } // from try @ 0198cec4 with catch @ 0198cf04
                       catch() { ... } // from try @ 0198cefc with catch @ 0198cf04 */
                    if ((*(long *)(param_2 + 0xf8) != 0) && (*(long *)(param_1 + 0x1b8) != 0)) {
                      OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty__Invoke
                                (*(long *)(param_1 + 0x1b8),
                                 *(undefined8 *)(*(long *)(param_2 + 0xf8) + 0x20),0);
                      *(undefined2 *)(param_1 + 0x1a8) = 0;
                      *(undefined4 *)(param_1 + 0x1cc) = 0;
                      *(undefined4 *)(param_1 + 0x1d4) = 0;
                      goto LAB_0198cf2c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_0198cf2c:
  puVar1 = Method_System_Nullable<Decimal>_GetValueOrDefault__;
  FUN_01989ea8(param_1,1);
  FUN_0136a30c(param_1,param_2,*(undefined8 *)puVar1);
  return;
}


