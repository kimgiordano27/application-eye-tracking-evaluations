/*
FUNCTION_NAME: FUN_034ebd70
ENTRY_POINT: 034ebd70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_16;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034ebd70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long extraout_x1;
  long extraout_x1_00;
  uint uVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined8 local_90;
  undefined2 local_84 [2];
  undefined8 local_80;
  undefined1 local_74 [4];
  long local_70;
  long local_68;
  
  puVar3 = Method_System_Net_WebHeaderCollection_GetAsString__;
  puVar2 = Method_System_Net_WebHeaderCollection_CheckBadChars__;
  puVar1 = Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__;
                    /* try { // try from 034ebd98 to 035ebda3 has its CatchHandler @ 034ec11c */
                    /* try { // try from 034ebda8 to 035ebdb3 has its CatchHandler @ 034ec114 */
  if ((DAT_04832e5c & 1) == 0) {
                    /* try { // try from 034ebdb8 to 035ebdc7 has its CatchHandler @ 034ec118 */
    thunk_FUN_01efb3a4(Method_System_IO_CStreamReader_Read__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_get_Length__);
    thunk_FUN_01efb3a4(Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__);
                    /* try { // try from 034ebdd8 to 035ebddf has its CatchHandler @ 034ec110 */
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_get_Position__);
    thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_set_Position__);
    thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_Add__);
                    /* try { // try from 034ebdfc to 035ebe07 has its CatchHandler @ 034ec0f4 */
    thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_CheckBadChars__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_Abort__);
                    /* try { // try from 034ebe10 to 035ebe17 has its CatchHandler @ 034ec0f8 */
    thunk_FUN_01efb3a4(Method_System_Net_WebHeaderCollection_GetAsString__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__
                      );
                    /* try { // try from 034ebe2c to 035ebe3f has its CatchHandler @ 034ec0fc */
    thunk_FUN_01efb3a4(Method_System_Net_WebConnectionStream_set_WriteTimeout__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_BeginGetRequestStream__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_BeginGetResponse__);
                    /* try { // try from 034ebe54 to 035ebe5b has its CatchHandler @ 034ec0e8 */
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_Create__);
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_Create__);
                    /* try { // try from 034ebe64 to 035ebe6f has its CatchHandler @ 034ec0e0 */
    thunk_FUN_01efb3a4(Method_System_Net_WebExceptionMapping_GetWebStatusString__);
                    /* try { // try from 034ebe70 to 035ec097 has its CatchHandler @ 034eb848 */
    thunk_FUN_01efb3a4(Method_System_Net_WebRequest_Create__);
    DAT_04832e5c = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_74[0] = 0;
  local_80 = 0;
  lVar9 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_030f2380(lVar9,*(undefined8 *)puVar2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar7 = Method_System_Net_WebRequest_Create__;
  puVar6 = Method_System_Net_WebRequest_Create__;
  puVar5 = Method_System_Net_WebRequest_Create__;
  puVar4 = Method_System_Net_WebReadStream_get_Position__;
  puVar3 = Method_System_Net_WebConnectionStream_set_WriteTimeout__;
  puVar2 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<FocusInEvent>__;
  puVar1 = Method_System_IO_CStreamReader_Read__;
  local_90 = FUN_0354e804(0);
  uVar8 = FUN_0354e970(&local_90,0);
  uVar16 = 0x7f6;
  do {
    uVar16 = uVar16 - 1;
    uVar10 = thunk_FUN_01ecad80(uVar16,&local_68,&local_70,local_74,0);
    if ((uVar10 & 1) == 0) goto System_Text_ASCIIEncoding__GetChars;
    if (local_68 == 0) goto LAB_034ec1ec;
    if (*(uint *)(local_68 + 0x18) < 4) goto LAB_034ec238;
    lVar21 = *(long *)(local_68 + 0x38);
    if (lVar21 != 0) {
      if (local_70 == 0) goto LAB_034ec1ec;
      if (*(uint *)(local_70 + 0x18) < 2) goto LAB_034ec238;
      lVar17 = *(long *)(local_70 + 0x28);
      goto LAB_034ebf70;
    }
  } while (0x7b3 < uVar16);
  lVar17 = 0;
LAB_034ebf70:
  uVar10 = thunk_FUN_01ecad80(uVar8,&local_68,&local_70,local_74,0);
  if ((uVar10 & 1) == 0) {
System_Text_ASCIIEncoding__GetChars:
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<double2>__ctor__);
    uVar18 = thunk_FUN_01f117cc();
    uVar11 = thunk_FUN_01efb3a4(Method_System_Net_WebRequest_EndGetRequestStream__);
    FUN_0356663c(uVar18,uVar11,0);
    uVar11 = thunk_FUN_01efb3a4(Method_System_Net_WebRequest_EndGetResponse__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar18,uVar11);
  }
  if (local_68 != 0) {
    if (*(uint *)(local_68 + 0x18) < 3) {
LAB_034ec238:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    uVar18 = *(undefined8 *)(local_68 + 0x30);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    local_80 = FUN_03581bf8(uVar18,0);
    uVar10 = FUN_035820e0(local_80,**(undefined8 **)(*(long *)puVar2 + 0xb8),0);
    local_84[0] = 0x2b;
    if ((uVar10 & 1) == 0) {
      local_84[0] = 0x2d;
    }
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar18 = FUN_034ec23c(local_84);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)puVar2);
    }
    uVar11 = FUN_03581da0(&local_80,*(undefined8 *)puVar5,0);
    auVar22 = FUN_0340eee0(*(undefined8 *)puVar7,uVar18,uVar11,*(undefined8 *)puVar6,0);
    puVar1 = Method_System_Net_WebRequest_BeginGetResponse__;
    lVar13 = auVar22._8_8_;
    if (local_70 != 0) {
      if (*(uint *)(local_70 + 0x18) == 0) goto LAB_034ec238;
      uVar18 = *(undefined8 *)(local_70 + 0x20);
      if (lVar17 == 0) {
        if (*(uint *)(local_70 + 0x18) < 2) goto LAB_034ec238;
        lVar17 = *(long *)(local_70 + 0x28);
      }
      if (lVar21 == 0) {
        if (lVar9 != 0) goto LAB_034ec170;
      }
      else {
        iVar19 = 0x7b3;
        do {
          lVar12 = *(long *)puVar3;
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar12,lVar13);
          }
          lVar13 = FUN_034f36cc(iVar19,&local_68,&local_70);
          if (lVar13 == 0) goto LAB_034ec1ec;
          if (0 < *(int *)(lVar13 + 0x18)) {
            if (lVar9 == 0) goto LAB_034ec1ec;
            FUN_030f2dc0(lVar9,lVar13,*(undefined8 *)puVar4);
            lVar13 = extraout_x1;
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 != 0x7f6);
        lVar12 = *(long *)puVar1;
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(lVar12,lVar13);
          lVar12 = *(long *)puVar1;
          lVar13 = extraout_x1_00;
        }
        lVar20 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x30);
        if (lVar20 == 0) {
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar12,lVar13);
            lVar12 = *(long *)puVar1;
          }
          uVar11 = **(undefined8 **)(lVar12 + 0xb8);
          lVar20 = thunk_FUN_01f117cc(*(undefined8 *)Method_System_Net_WebReadStream_get_Length__);
          FUN_02a487e4(lVar20,uVar11,
                       *(undefined8 *)Method_System_Net_WebRequest_BeginGetRequestStream__,0);
          plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
          *plVar14 = lVar20;
          thunk_FUN_01f51358(plVar14,lVar20);
        }
        if (lVar9 != 0) {
          FUN_030f459c(lVar9,lVar20,*(undefined8 *)Method_System_Net_WebReadStream_set_Position__);
LAB_034ec170:
          uVar11 = local_80;
          uVar15 = FUN_030f4630(lVar9,*(undefined8 *)Method_System_Net_WebHeaderCollection_Add__);
          lVar9 = *(long *)puVar3;
          if (*(int *)(lVar9 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(lVar9);
          }
          FUN_034f11a8(*(undefined8 *)Method_System_Net_WebExceptionMapping_GetWebStatusString__,
                       uVar11,auVar22._0_8_,uVar18,lVar17,uVar15,lVar21 == 0);
          return;
        }
      }
    }
  }
LAB_034ec1ec:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


