/*
FUNCTION_NAME: FUN_05d1bd28
ENTRY_POINT: 05d1bd28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05d1bd28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_38;
  
  puVar3 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_set_Capacity__;
  puVar2 = UnityEngine_Networking_UnityWebRequest_TypeInfo;
  puVar1 = PTR_DAT_069fc268;
                    /* try { // try from 05d1bd38 to 05e1bd3f has its CatchHandler @ 05d1c360 */
                    /* try { // try from 05d1bd44 to 05e1bd4f has its CatchHandler @ 05d1c2bc */
                    /* try { // try from 05d1bd54 to 05e1bd5f has its CatchHandler @ 05d1c2b8 */
  if ((DAT_06dc2f09 & 1) == 0) {
                    /* try { // try from 05d1bd64 to 05e1bd6f has its CatchHandler @ 05d1c2e4 */
    FUN_02d965b8(PTR_DAT_069fc268);
                    /* try { // try from 05d1bd78 to 05e1bd7f has its CatchHandler @ 05d1c374 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputControl>_set_Capacity__);
    FUN_02d965b8(PTR_DAT_069fc180);
                    /* try { // try from 05d1bd90 to 05e1bd93 has its CatchHandler @ 05d1c2dc */
    FUN_02d965b8(PTR_DAT_069ff7d8);
    FUN_02d965b8(PTR_DAT_06a01850);
                    /* try { // try from 05d1bda4 to 05e1bdab has its CatchHandler @ 05d1c2d8 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputControl>_set_Item__);
    FUN_02d965b8(
                System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                );
    FUN_02d965b8(PTR_DAT_06a0b298);
                    /* try { // try from 05d1bdc8 to 05e1bdcf has its CatchHandler @ 05d1c28c */
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlList<InputDevice>_AddSlice<ReadOnlyArray<InputDevice>>__
                );
    FUN_02d965b8(
                Method_UnityEngine_InputSystem_InputControlList<InputDevice>_Sort<InputUser_CompareDevicesByUserAccount>__
                );
                    /* try { // try from 05d1bde4 to 05e1be03 has its CatchHandler @ 05d1c498 */
    FUN_02d965b8(Method_UnityEngine_InputSystem_InputControlList<InputDevice>__ctor__);
    FUN_02d965b8(UnityEngine_Networking_UnityWebRequest_TypeInfo);
    DAT_06dc2f09 = 1;
  }
  local_38 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = thunk_FUN_02dd2d7c(*(undefined8 *)puVar1,&local_38);
  lVar5 = FUN_0536388c(*(undefined8 *)puVar2,uVar4,0);
  local_58 = *(undefined8 *)puVar3;
  local_48 = *(undefined4 *)(param_1 + 0x20);
                    /* try { // try from 05d1be2c to 05e1be37 has its CatchHandler @ 05d1c2f8 */
  uStack_50 = 0xffffffffffffffff;
                    /* try { // try from 05d1be40 to 05e1be43 has its CatchHandler @ 05d1c2f4 */
  lVar6 = FUN_0551e574(&local_58,0);
  puVar1 = 
  Method_UnityEngine_InputSystem_InputControlList<InputDevice>_Sort<InputUser_CompareDevicesByUserAccount>__
  ;
  if (lVar6 != 0) {
                    /* try { // try from 05d1be50 to 05e1be57 has its CatchHandler @ 05d1c378 */
    uVar4 = FUN_05371de0(lVar6,0);
                    /* try { // try from 05d1be68 to 05e1be6f has its CatchHandler @ 05d1c2ec */
    lVar6 = FUN_0536388c(*(undefined8 *)puVar1,uVar4,0);
    plVar11 = *(long **)(param_1 + 0x10);
                    /* try { // try from 05d1be80 to 05e1be8b has its CatchHandler @ 05d1c2e8 */
                    /* try { // try from 05d1be9c to 05e1bea7 has its CatchHandler @ 05d1c30c */
    if (((plVar11 != (long *)0x0) &&
        (plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                     (plVar11,*(undefined8 *)(*plVar11 + 0x1b0)),
        plVar11 != (long *)0x0)) &&
       (plVar7 = (long *)(**(code **)(*plVar11 + 0x218))(plVar11,*(undefined8 *)(*plVar11 + 0x220)),
       puVar1 = 
       System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var,
       plVar7 != (long *)0x0)) {
      uVar4 = (**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
                    /* try { // try from 05d1bec0 to 05e1bec3 has its CatchHandler @ 05d1c308 */
      uVar8 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
                    /* try { // try from 05d1bedc to 05e1bee3 has its CatchHandler @ 05d1c304 */
                    /* try { // try from 05d1beec to 05e1bef3 has its CatchHandler @ 05d1c300 */
      lVar9 = FUN_0536e0dc(*(undefined8 *)puVar1,uVar4,uVar8,0);
                    /* try { // try from 05d1bf18 to 05e1bf23 has its CatchHandler @ 05d1c310 */
      if (((*(long *)(param_1 + 0x28) != 0) &&
          (lVar10 = FUN_0536f9ec(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_06a0b298,
                                 *(undefined8 *)PTR_DAT_06a01850,0), lVar10 != 0)) &&
         ((lVar10 = FUN_05372288(lVar10,10,0), lVar10 != 0 &&
          (lVar10 = FUN_05370114(lVar10,10,0,0), lVar10 != 0)))) {
        if (*(int *)(lVar10 + 0x18) < 2) {
          plVar11 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,4);
          if (plVar11 != (long *)0x0) {
            if ((lVar5 != 0) &&
               (lVar10 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar10 == 0)) {
LAB_05d1c124:
              uVar4 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar4,0);
            }
            if ((int)plVar11[3] != 0) {
              plVar11[4] = lVar5;
              LeanTween__value(plVar11 + 4,lVar5);
              if ((lVar6 != 0) &&
                 (lVar5 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
              goto LAB_05d1c124;
              if ((*(uint *)(plVar11 + 3) & 0xfffffffe) != 0) {
                plVar11[5] = lVar6;
                LeanTween__value(plVar11 + 5,lVar6);
                if ((lVar9 != 0) &&
                   (lVar5 = thunk_FUN_02dd3048(lVar9,*(undefined8 *)(*plVar11 + 0x40)), lVar5 == 0))
                goto LAB_05d1c124;
                if (2 < *(uint *)(plVar11 + 3)) {
                  plVar11[6] = lVar9;
                  LeanTween__value(plVar11 + 6,lVar9);
                  lVar5 = *(long *)(param_1 + 0x28);
                  if ((lVar5 != 0) &&
                     (lVar6 = thunk_FUN_02dd3048(lVar5,*(undefined8 *)(*plVar11 + 0x40)), lVar6 == 0
                     )) goto LAB_05d1c124;
                  if ((*(uint *)(plVar11 + 3) & 0xfffffffc) != 0) {
                    plVar11[7] = lVar5;
                    LeanTween__value(plVar11 + 7,lVar5);
                    FUN_0536e164(*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputDevice>__ctor__
                                 ,plVar11,0);
                    return;
                  }
                }
              }
            }
LAB_05d1c11c:
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
        }
        else {
          plVar11 = (long *)thunk_FUN_02dd3144(*(undefined8 *)PTR_DAT_069ff7d8);
          FUN_05377fb8(plVar11,0x40,0);
          if (plVar11 != (long *)0x0) {
            FUN_0537b6ac(plVar11,*(undefined8 *)
                                  Method_UnityEngine_InputSystem_InputControlList<InputDevice>_AddSlice<ReadOnlyArray<InputDevice>>__
                         ,lVar5,lVar6,lVar9,0);
            puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputControl>_set_Item__;
            if (0 < (int)*(ulong *)(lVar10 + 0x18)) {
              uVar13 = 0;
              uVar12 = *(ulong *)(lVar10 + 0x18) & 0xffffffff;
              do {
                if (uVar12 <= uVar13) goto LAB_05d1c11c;
                FUN_0537ab70(plVar11,*(undefined8 *)puVar1,
                             *(undefined8 *)(lVar10 + 0x20 + uVar13 * 8),0);
                uVar12 = (ulong)*(uint *)(lVar10 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)*(uint *)(lVar10 + 0x18));
            }
            (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


