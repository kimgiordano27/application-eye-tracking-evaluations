/*
FUNCTION_NAME: FUN_03ece408
ENTRY_POINT: 03ece408
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_03ece408(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_0483ad25 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<HelpURLAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlLayoutAttribute>__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_System_Reflection_CustomAttributeExtensions_GetCustomAttributes<JsonPropertyAttribute>__
                      );
    DAT_0483ad25 = 1;
  }
  puVar3 = 
  Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<InputControlAttribute>__;
  puVar2 = Method_System_Reflection_CustomAttributeExtensions_GetCustomAttribute<HelpURLAttribute>__
  ;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plStack_48 = (long *)0x0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  FUN_032a81dc(&local_70,*(long *)(param_1 + 0x18),
               *(undefined8 *)
                Method_System_Reflection_CustomAttributeExtensions_GetCustomAttributes<JsonPropertyAttribute>__
              );
  do {
    uVar5 = FUN_02ccfea4(&local_70,*(undefined8 *)puVar3);
    plVar4 = plStack_48;
                    /* try { // try from 03ece4b8 to 03fce4cb has its CatchHandler @ 03ece9b0 */
    if ((uVar5 & 1) == 0) {
      FUN_02ccfea0(&local_70,*(undefined8 *)puVar2);
                    /* try { // try from 03ece52c to 03fce53b has its CatchHandler @ 03ece938 */
      return;
    }
    if (plStack_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = *plStack_48;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
                    /* try { // try from 03ece4d8 to 03fce4e7 has its CatchHandler @ 03ece9a8 */
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03ece510;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
                    /* try { // try from 03ece4f4 to 03fce503 has its CatchHandler @ 03ece9a0 */
    puVar6 = (undefined8 *)FUN_01ecb238(plStack_48,*(long *)puVar1,0);
LAB_03ece510:
                    /* try { // try from 03ece510 to 03fce51f has its CatchHandler @ 03ece998 */
    (*(code *)*puVar6)(plVar4,puVar6[1]);
  } while( true );
}


