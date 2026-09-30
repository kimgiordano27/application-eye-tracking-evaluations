/*
FUNCTION_NAME: FUN_05f71644
ENTRY_POINT: 05f71644
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05f718dc) */
/* WARNING: Removing unreachable block (ram,0x05f719bc) */

undefined8 FUN_05f71644(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_06dc4459 & 1) == 0) {
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__);
    FUN_02d965b8(Method_System_Tuple<int,_int,_int,_bool>__ctor__);
    FUN_02d965b8(Method_System_Tuple<string,_string>_get_Item1__);
    FUN_02d965b8(PTR_DAT_069fed00);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>__ctor__);
    FUN_02d965b8(Method_System_Tuple<Vector3,_float>_get_Item2__);
    FUN_02d965b8(PTR_DAT_069fed10);
    FUN_02d965b8(Method_System_Tuple<Vector3,_Vector3>_get_Item2__);
    FUN_02d965b8(PTR_DAT_069fed28);
    FUN_02d965b8(Method_System_Tuple<bool,_bool,_bool,_bool>__ctor__);
    FUN_02d965b8(PTR_DAT_069fed38);
    FUN_02d965b8(Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__)
    ;
                    /* try { // try from 05f71714 to 0607171b has its CatchHandler @ 05f71904 */
    DAT_06dc4459 = 1;
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
                    /* try { // try from 05f71728 to 0607172f has its CatchHandler @ 05f71900 */
  local_110 = 0;
  puStack_128 = (undefined8 *)0x0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
                    /* try { // try from 05f71730 to 0607179b has its CatchHandler @ 05f7145c */
  if (*(char *)(param_1 + 0x1ea) == '\0') {
LAB_05f71994:
    uVar8 = 1;
  }
  else {
    if (param_2 != 0) {
      FUN_05f709f8(param_1,param_2,*(undefined8 *)(param_1 + 0x198));
      puVar1 = Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__;
      if (*(int *)(*(long *)
                    Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                  + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      if (DAT_06dc43e7 == '\0') {
        FUN_02d965b8(
                    Method_System_Runtime_CompilerServices_TaskAwaiter<HttpClientResponse>_GetResult__
                    );
        DAT_06dc43e7 = '\x01';
      }
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar5 = *(long *)puVar1;
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
                    /* try { // try from 05f7179c to 0607179f has its CatchHandler @ 05f718fc */
      if (lVar5 == 0) {
LAB_05f719c8:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
                    /* try { // try from 05f717a0 to 0607191f has its CatchHandler @ 05f7145c */
      uVar6 = FUN_05f50ad4(lVar5,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(param_1 + 0x198) == 0) goto LAB_05f719c8;
        FUN_03fb4898(&local_e0,*(long *)(param_1 + 0x198),*(undefined8 *)PTR_DAT_069fed38);
        puVar4 = Method_System_Tuple<int,_int,_int,_bool>__ctor__;
        puVar3 = Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item4__;
        puVar2 = Method_System_Tuple<Vector3,_float>_get_Item2__;
        puVar1 = Method_System_Tuple<Vector3,_float>__ctor__;
        uStack_f8 = uStack_d8;
        local_100 = local_e0;
        local_f0 = local_d0;
        local_138 = &local_100;
        local_140 = 0;
        while (uVar7 = FUN_051434b8(&local_100,*(undefined8 *)PTR_DAT_069fed10), uVar6 = local_f0,
              lVar5 = local_140, (uVar7 & 1) != 0) {
          lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Method_System_Tuple<bool,_bool,_bool,_bool>_get_Item3__);
          FUN_05f6bdf0();
          if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04e93a24(&local_168,*(long *)(param_1 + 0x98),
                       *(undefined8 *)Method_System_Tuple<string,_string>_get_Item1__);
          local_130 = local_168;
          local_168 = 0;
          puStack_128 = puStack_160;
          uStack_118 = uStack_150;
          local_120 = local_158;
          local_110 = local_148;
          puStack_160 = &local_130;
          while (uVar7 = FUN_05232904(&local_130,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f7179c with catch @ 05f718fc
                        */
              FUN_02d96860();
            }
            if (*(long *)(lVar5 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05f71714 with catch @ 05f71904
                        */
              FUN_02d96860();
            }
            uStack_d8 = 0;
            local_e0 = 0;
            uStack_c8 = 0;
            local_d0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
            FUN_04f10b14(*(long *)(lVar5 + 0x40),local_120,&local_e0,*(undefined8 *)puVar3);
          }
          FUN_05232a24(&local_130,*(undefined8 *)puVar1);
          if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_04d966b8(*(long *)(param_1 + 0x70),uVar6 & 0xffffffff,lVar5,*(undefined8 *)puVar4);
        }
        FUN_051434b4(local_138,*(undefined8 *)PTR_DAT_069fed00);
        if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96858(lVar5);
        }
        goto LAB_05f71994;
      }
      uVar6 = FUN_05f70e8c(param_1);
                    /* catch() { ... } // from try @ 05f71920 with catch @ 05f71944 */
      if ((uVar6 & 1) != 0) {
                    /* try { // try from 05f71948 to 0607194f has its CatchHandler @ 05f71958 */
                    /* try { // try from 05f71950 to 0607195b has its CatchHandler @ 05f7145c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05f71948 with catch @ 05f71958
                        */
        uVar8 = FUN_05f710ac(param_1,*(undefined8 *)(param_1 + 0x198));
        return uVar8;
      }
    }
    uVar8 = 0;
  }
  return uVar8;
}


