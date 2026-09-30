/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetCurrentInteractionProfile
ENTRY_POINT: 036a50e4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_78_0__ovrp_GetCurrentInteractionProfile(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  uint unaff_w19;
  long unaff_x20;
  long *plVar4;
  undefined8 *unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long unaff_x26;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_System_IO_Path_<>c_<JoinInternal>b__57_0__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Networking_PlayerConnection_PlayerEditorConnectionEvents_<>c__DisplayClass6_0_<InvokeMessageIdSubscribers>b__0__
                    );
                    /* try { // try from 036a5100 to 037a510b has its CatchHandler @ 036a5274 */
  *(undefined1 *)(unaff_x26 + 0xfa8) = 1;
  uVar1 = thunk_FUN_01f113fc(*unaff_x25,&stack0x0000000c);
                    /* try { // try from 036a511c to 037a5123 has its CatchHandler @ 036a5270 */
  uVar1 = FUN_03406290(*unaff_x24,uVar1,0);
  lVar2 = thunk_FUN_01f117cc(*unaff_x22);
                    /* try { // try from 036a5144 to 037a5153 has its CatchHandler @ 036a5294 */
  UnityEngine_UIElements_UIR_Implementation_RenderEvents__UpdateLocalFlipsWinding(lVar2,uVar1,0);
                    /* try { // try from 036a5158 to 037a51f7 has its CatchHandler @ 036a5298 */
  if ((lVar2 != 0) &&
     (lVar2 = FUN_023360e0(lVar2,*(undefined8 *)
                                  Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_14__
                          ), lVar2 != 0)) {
    FUN_040c1268(0x3f800000,lVar2,0);
    FUN_040c1334(lVar2,1,0);
    FUN_040c12b4(lVar2,0,0);
    FUN_040c13bc(lVar2,3,0);
    lVar3 = FUN_04070398(lVar2,0);
    if (lVar3 != 0) {
      FUN_0407dcf4();
      FUN_04070398(lVar2,0);
      FUN_03667070();
      lVar3 = FUN_040703d4(lVar2,0);
      if (lVar3 != 0) {
        FUN_04073314(lVar3,0,0);
        lVar3 = FUN_040703d4(lVar2,0);
        if (lVar3 != 0) {
          FUN_040732d0(lVar3,*(undefined4 *)(unaff_x20 + 0x3c),0);
          plVar4 = *(long **)(unaff_x20 + 0x68);
          if (plVar4 != (long *)0x0) {
            lVar3 = thunk_FUN_01f116d0(lVar2,*(undefined8 *)(*plVar4 + 0x40));
            if (lVar3 == 0) {
              uVar1 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar1,0);
            }
            if (unaff_w19 < *(uint *)(plVar4 + 3)) {
              plVar4[(long)(int)unaff_w19 + 4] = lVar2;
              thunk_FUN_01f51358(plVar4 + (long)(int)unaff_w19 + 4,lVar2);
              return lVar2;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


