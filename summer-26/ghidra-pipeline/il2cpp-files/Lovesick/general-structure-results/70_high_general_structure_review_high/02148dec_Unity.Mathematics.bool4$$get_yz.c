/*
FUNCTION_NAME: Unity.Mathematics.bool4$$get_yz
ENTRY_POINT: 02148dec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


long Unity_Mathematics_bool4__get_yz
               (long param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,long *param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  ulong in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined1 in_stack_00000088;
  
                    /* try { // try from 02148df0 to 02248df7 has its CatchHandler @ 02148fc4 */
                    /* catch() { ... } // from try @ 02148de0 with catch @ 02148df8
                       try { // try from 02148df8 to 02248e0f has its CatchHandler @ 0214833c */
  if ((DAT_03781232 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                      );
    thunk_FUN_00d48444(StringLiteral_9199);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(StringLiteral_6438);
    thunk_FUN_00d48444(System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo);
    DAT_03781232 = 1;
  }
  in_stack_00000070 = 0;
  in_stack_00000088 = 0;
  in_stack_00000008 = 0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar5 = FUN_015ff8a0(param_1,0);
  puVar3 = StringLiteral_6438;
  if ((uVar5 & 1) != 0) {
    return **(long **)(*(long *)
                        System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo
                      + 0xb8);
  }
  if ((param_5 == (long *)0x0) ||
     ((plVar6 = (long *)FUN_02141568(param_5,param_1,0), plVar6 == (long *)0x0 &&
      (uVar5 = FUN_02149214(param_1,param_5), plVar6 = param_5, (uVar5 & 1) == 0)))) {
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_Dictionary<TerrainData,_ObiHeightFieldHandle>_get_Count__
                                       );
    if ((plVar6 != (long *)0x0) &&
       (FUN_0160aa4c(plVar6,0), in_stack_00000010 = param_1, param_1 != 0)) {
      in_stack_00000020 = in_stack_00000020 & 0xffffffff00000000;
      in_stack_00000030 = 0;
      in_stack_00000028 = 0;
      in_stack_00000040 = 0;
      in_stack_00000038 = 0;
      in_stack_00000050 = 0;
      in_stack_00000048 = 0;
      in_stack_00000060 = 0;
      in_stack_00000058 = 0;
      in_stack_00000018 = (ulong)*(uint *)(param_1 + 0x10);
      in_stack_00000070 = 0;
      in_stack_00000068 = 0;
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_Start<VRequest_<RequestFileHeaders>d__104>__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00000088 = FUN_021ebca8(0);
      uVar5 = FUN_0214934c(&stack0x00000010);
      if ((uVar5 & 1) != 0) {
        uVar7 = FUN_021495bc(&stack0x00000028,0,0,&stack0x00000008);
        *param_2 = in_stack_00000008;
        bVar12 = true;
        while (uVar5 = FUN_0214934c(&stack0x00000010), (uVar5 & 1) != 0) {
          if (!bVar12) {
            FUN_0160cd0c(plVar6,0x2f,0);
          }
          uVar9 = FUN_021495bc(&stack0x00000028,in_stack_00000008,*param_3,&stack0x00000008,param_3,
                               param_4);
          FUN_0160c430(plVar6,uVar9,0);
          bVar12 = false;
        }
        if (((param_4 >> 1 & 1) == 0) && (uVar5 = FUN_015ff8a0(uVar7,0), (uVar5 & 1) == 0)) {
          FUN_0160c430(plVar6,*(undefined8 *)puVar3,0);
          FUN_0160c430(plVar6,uVar7,0);
          FUN_0160cd0c(plVar6,0x5d,0);
        }
      }
      iVar4 = FUN_0160b5d0(plVar6,0);
      if (iVar4 != 0) {
        param_1 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      FUN_021ef78c(&stack0x00000088,0);
      return param_1;
    }
    goto LAB_02149178;
  }
  if ((param_4 >> 2 & 1) == 0) {
LAB_02148f04:
    lVar8 = FUN_02143cdc(plVar6);
  }
  else {
    uVar7 = FUN_02143d70(plVar6);
    uVar5 = FUN_015ff8a0(uVar7,0);
    if ((uVar5 & 1) != 0) goto LAB_02148f04;
    lVar8 = FUN_02143d70(plVar6);
  }
  puVar2 = System_Collections_Generic_List<ValueTuple<int,_Vector2Int>>_TypeInfo;
  if ((param_4 >> 1 & 1) == 0) {
    if (plVar6[0xf] == 0) goto LAB_02149178;
    uVar7 = FUN_02143cdc();
    lVar8 = FUN_0160073c(lVar8,*(undefined8 *)puVar3,uVar7,*(undefined8 *)puVar2,0);
  }
  puVar3 = StringLiteral_9199;
  lVar11 = plVar6[0xf];
  if (lVar11 == 0) {
LAB_02149178:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar7 = UnityEngine_ProBuilder_ColorUtility__RGBToXYZ
                    (*(undefined8 *)(lVar11 + 0x58),*(undefined8 *)(lVar11 + 0x60),0);
  *param_2 = uVar7;
  bVar1 = *(byte *)(*(long *)puVar3 + 300);
  if ((*(byte *)(*plVar6 + 300) < bVar1) ||
     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
    lVar11 = FUN_02143dbc(plVar6);
    if ((plVar6[0xf] == 0) || ((lVar10 = FUN_02143dbc(plVar6[0xf]), lVar10 == 0 || (lVar11 == 0))))
    goto LAB_02149178;
    uVar7 = FUN_01603ec8(lVar11,*(int *)(lVar10 + 0x10) + 1,0);
    *param_3 = uVar7;
  }
  return lVar8;
}


