/*
FUNCTION_NAME: FUN_0614ea08
ENTRY_POINT: 0614ea08
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


uint FUN_0614ea08(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_68;
  int *piStack_60;
  long *local_58;
  long **pplStack_50;
  long *local_48;
  int local_3c;
  long local_38;
  
                    /* try { // try from 0614ea08 to 0624ea13 has its CatchHandler @ 06150234 */
                    /* try { // try from 0614ea18 to 0624ea3b has its CatchHandler @ 0615069c */
  local_38 = param_1;
  if ((DAT_076dda76 & 1) == 0) {
                    /* try { // try from 0614ea3c to 0624ea4b has its CatchHandler @ 061502f0 */
    thunk_FUN_032e1da0(System_Collections_Generic_List<Button>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_0727ea28);
                    /* try { // try from 0614ea50 to 0624ea5b has its CatchHandler @ 061502a8 */
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
                    /* try { // try from 0614ea5c to 0624ea67 has its CatchHandler @ 06150264 */
    thunk_FUN_032e1da0(System_Func<Task>_TypeInfo);
    thunk_FUN_032e1da0(PTR_DAT_072a1920);
    thunk_FUN_032e1da0(System_Collections_Generic_List<ByRefUpdater>_TypeInfo);
                    /* try { // try from 0614ea80 to 0624ea8b has its CatchHandler @ 06150248 */
    DAT_076dda76 = 1;
  }
  local_3c = 0;
                    /* try { // try from 0614ea90 to 0624ea9b has its CatchHandler @ 06150230 */
  local_48 = (long *)0x0;
  plVar12 = (long *)(param_1 + 0x58);
  *plVar12 = param_2;
                    /* try { // try from 0614ea9c to 0624eaa7 has its CatchHandler @ 06150210 */
  thunk_FUN_0333a630(plVar12,param_2);
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 0614eab8 to 0624eac3 has its CatchHandler @ 061501fc */
    uVar7 = (**(code **)(*plVar6 + 0x198))
                      (plVar6,*(undefined8 *)PTR_DAT_072a1920,*(undefined8 *)(*plVar6 + 0x1a0));
                    /* try { // try from 0614eac8 to 0624eaeb has its CatchHandler @ 06150698 */
    *(undefined8 *)(param_1 + 0x40) = uVar7;
    thunk_FUN_0333a630((undefined8 *)(param_1 + 0x40),uVar7);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 != (long *)0x0) {
                    /* try { // try from 0614eaec to 0624eafb has its CatchHandler @ 061502ec */
      uVar7 = (**(code **)(*plVar6 + 0x198))
                        (plVar6,*(undefined8 *)System_Func<Task>_TypeInfo,
                         *(undefined8 *)(*plVar6 + 0x1a0));
      *(undefined8 *)(param_1 + 0x48) = uVar7;
                    /* try { // try from 0614eb00 to 0624eb0b has its CatchHandler @ 061502a4 */
      thunk_FUN_0333a630((undefined8 *)(param_1 + 0x48),uVar7);
                    /* try { // try from 0614eb0c to 0624eb17 has its CatchHandler @ 0615076c */
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (plVar6 = (long *)FUN_0619bbd8(*(long *)(param_1 + 0x58),0), plVar6 != (long *)0x0)) {
        (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
                    /* try { // try from 0614eb30 to 0624eb37 has its CatchHandler @ 0615022c */
                    /* try { // try from 0614eb3c to 0624eb5f has its CatchHandler @ 06150694 */
        if ((*plVar12 != 0) && (plVar6 = (long *)FUN_0619bc48(*plVar12,0), plVar6 != (long *)0x0)) {
          (**(code **)(*plVar6 + 0x328))(plVar6,*(undefined8 *)(*plVar6 + 0x330));
          if (*plVar12 != 0) {
                    /* try { // try from 0614eb60 to 0624eb6f has its CatchHandler @ 061502e8 */
            uVar7 = *(undefined8 *)(*plVar12 + 0xd0);
            if (*(int *)(*(long *)PTR_DAT_0727ea28 + 0xe0) == 0) {
                    /* try { // try from 0614eb74 to 0624eb7f has its CatchHandler @ 061502a0 */
              thunk_FUN_032cd7c0();
            }
                    /* try { // try from 0614eb80 to 0624eb8b has its CatchHandler @ 06150768 */
            uVar8 = FUN_062a8838(uVar7,0,0);
            if ((uVar8 & 1) != 0) {
              if ((*(long *)(param_1 + 0x58) == 0) ||
                 (plVar6 = *(long **)(param_1 + 0x78), plVar6 == (long *)0x0)) goto LAB_0614eef0;
              lVar9 = (**(code **)(*plVar6 + 0x308))
                                (plVar6,*(undefined8 *)(*(long *)(param_1 + 0x58) + 0xd0),
                                 *(undefined8 *)(*plVar6 + 0x310));
                    /* try { // try from 0614ebb0 to 0624ebbb has its CatchHandler @ 06150228 */
              if (lVar9 == 0) {
                lVar9 = *(long *)(param_1 + 0x58);
                    /* try { // try from 0614ebc0 to 0624ebcb has its CatchHandler @ 06150334 */
                if ((lVar9 == 0) || (plVar6 = *(long **)(param_1 + 0x78), plVar6 == (long *)0x0))
                goto LAB_0614eef0;
                    /* try { // try from 0614ebd0 to 0624ebdb has its CatchHandler @ 06150314 */
                (**(code **)(*plVar6 + 0x2a8))
                          (plVar6,*(undefined8 *)(lVar9 + 0xd0),lVar9,
                           *(undefined8 *)(*plVar6 + 0x2b0));
              }
            }
            if (*plVar12 != 0) {
              lVar9 = *(long *)(*plVar12 + 0x48);
              if (lVar9 == 0) {
                lVar9 = param_3;
                if ((param_3 != 0) && (*(int *)(param_3 + 0x10) != 0)) {
                  uVar7 = FUN_0614ef0c(param_1,param_3);
                  *(undefined8 *)(param_1 + 0x58) = uVar7;
                  thunk_FUN_0333a630(plVar12,uVar7);
                }
              }
              else {
                    /* try { // try from 0614ebf4 to 0624ebf7 has its CatchHandler @ 0614ffd8 */
                    /* try { // try from 0614ebf8 to 0624ec07 has its CatchHandler @ 0615029c */
                if ((param_3 != 0) &&
                   (uVar8 = FUN_057aa92c(param_3,lVar9,0), lVar9 = param_3, (uVar8 & 1) != 0)) {
                  lVar9 = *plVar12;
                  if (lVar9 == 0) goto LAB_0614eef0;
                    /* try { // try from 0614ec10 to 0624ec1b has its CatchHandler @ 06150260 */
                    /* try { // try from 0614ec20 to 0624ec27 has its CatchHandler @ 061501f8 */
                  FUN_062810dc(param_1,*(undefined8 *)
                                        System_Collections_Generic_List<ByRefUpdater>_TypeInfo,
                               param_3,*(undefined8 *)(lVar9 + 0x48),lVar9,0);
                  lVar9 = param_3;
                }
              }
              if (((param_4 & 1) != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
                FUN_0614f04c(param_1,*(undefined8 *)(param_1 + 0x58));
              }
              FUN_0614fd08(param_1,*(undefined8 *)(param_1 + 0x58));
              puVar2 = System_Collections_Generic_List<Button>_TypeInfo;
              puVar1 = 
              System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
              ;
              piStack_60 = &local_3c;
              local_58 = &local_38;
              pplStack_50 = &local_48;
              local_68 = 0;
              local_3c = 0;
              plVar6 = *(long **)(param_1 + 0x98);
              iVar10 = local_3c;
              while( true ) {
                local_3c = iVar10;
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                iVar4 = (**(code **)(*plVar6 + 0x2a8))(plVar6,*(undefined8 *)(*plVar6 + 0x2b0));
                if (iVar4 <= iVar10) break;
                plVar6 = *(long **)(local_38 + 0x98);
                if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                plVar6 = (long *)(**(code **)(*plVar6 + 0x378))
                                           (plVar6,local_3c,*(undefined8 *)(*plVar6 + 0x380));
                if (plVar6 != (long *)0x0) {
                  bVar3 = *(byte *)(*(long *)puVar1 + 0x130);
                  if ((*(byte *)(*plVar6 + 0x130) < bVar3) ||
                     (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar1
                     )) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d618c();
                  }
                }
                local_48 = plVar6;
                thunk_FUN_03313774(plVar6,0);
                if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_032d5ee8();
                }
                *(undefined1 *)(local_48 + 6) = 0;
                iVar10 = local_3c + 1;
                plVar6 = *(long **)(local_38 + 0x98);
              }
              *(undefined8 *)(local_38 + 0xa8) = *(undefined8 *)(local_38 + 0x58);
              thunk_FUN_0333a630();
              lVar11 = *(long *)(local_38 + 0x58);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_032d5ee8();
              }
              uVar7 = FUN_0619bbd8(lVar11,0);
              FUN_0614fe80(local_38,lVar11,lVar9,uVar7);
              plVar6 = *(long **)(local_38 + 0xb0);
              if (plVar6 != (long *)0x0) {
                iVar10 = 0;
                while (iVar4 = (**(code **)(*plVar6 + 0x298))
                                         (plVar6,*(undefined8 *)(*plVar6 + 0x2a0)), iVar10 < iVar4)
                {
                  plVar6 = *(long **)(local_38 + 0xb0);
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                  plVar6 = (long *)(**(code **)(*plVar6 + 0x2e8))
                                             (plVar6,iVar10,*(undefined8 *)(*plVar6 + 0x2f0));
                  if (plVar6 != (long *)0x0) {
                    bVar3 = *(byte *)(*(long *)puVar2 + 0x130);
                    if ((*(byte *)(*plVar6 + 0x130) < bVar3) ||
                       (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar3 * 8 + -8) !=
                        *(long *)puVar2)) {
                    /* WARNING: Subroutine does not return */
                      FUN_032d618c(plVar6);
                    }
                  }
                  FUN_06151138(local_38,plVar6);
                  iVar10 = iVar10 + 1;
                  plVar6 = *(long **)(local_38 + 0xb0);
                  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_032d5ee8();
                  }
                }
              }
              FUN_0322cd20(&local_68);
              lVar9 = *(long *)(local_38 + 0x58);
              bVar3 = FUN_06280740(local_38,0);
              if (lVar9 != 0) {
                *(byte *)(lVar9 + 0x7a) = ~bVar3 & 1;
                uVar5 = FUN_06280740(local_38,0);
                return ~uVar5 & 1;
              }
            }
          }
        }
      }
    }
  }
LAB_0614eef0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


