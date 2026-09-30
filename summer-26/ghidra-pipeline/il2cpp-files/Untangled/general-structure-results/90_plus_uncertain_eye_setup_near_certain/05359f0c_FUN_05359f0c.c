/*
FUNCTION_NAME: FUN_05359f0c
ENTRY_POINT: 05359f0c
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_05359f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [16];
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  undefined1 auVar307 [16];
  undefined1 auVar308 [16];
  undefined1 auVar309 [16];
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  undefined1 auVar328 [16];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar336 [16];
  undefined1 auVar337 [16];
  undefined1 auVar338 [16];
  undefined1 auVar339 [16];
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [16];
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar381 [16];
  undefined1 auVar382 [16];
  undefined1 auVar383 [16];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  undefined1 auVar394 [16];
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar419 [16];
  undefined1 auVar420 [16];
  undefined1 auVar421 [16];
  undefined1 auVar422 [16];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [16];
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [16];
  undefined1 auVar442 [16];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar449 [16];
  undefined1 auVar450 [16];
  undefined1 auVar451 [16];
  undefined1 auVar452 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [16];
  undefined1 auVar455 [16];
  undefined1 auVar456 [16];
  undefined1 auVar457 [16];
  undefined1 auVar458 [16];
  undefined1 auVar459 [16];
  undefined1 auVar460 [16];
  undefined1 auVar461 [16];
  undefined1 auVar462 [16];
  undefined1 auVar463 [16];
  undefined1 auVar464 [16];
  undefined1 auVar465 [16];
  undefined1 auVar466 [16];
  undefined1 auVar467 [16];
  undefined1 auVar468 [16];
  undefined1 auVar469 [16];
  undefined1 auVar470 [16];
  undefined1 auVar471 [16];
  undefined1 auVar472 [16];
  undefined1 auVar473 [16];
  undefined1 auVar474 [16];
  undefined1 auVar475 [16];
  undefined1 auVar476 [16];
  undefined1 auVar477 [16];
  undefined1 auVar478 [16];
  undefined1 auVar479 [16];
  undefined1 auVar480 [16];
  undefined1 auVar481 [16];
  undefined1 auVar482 [16];
  undefined1 auVar483 [16];
  undefined1 auVar484 [16];
  undefined1 auVar485 [16];
  undefined1 auVar486 [16];
  undefined1 auVar487 [16];
  undefined1 auVar488 [16];
  undefined1 auVar489 [16];
  undefined1 auVar490 [16];
  undefined1 auVar491 [16];
  undefined1 auVar492 [16];
  undefined1 auVar493 [16];
  undefined1 auVar494 [16];
  undefined1 auVar495 [16];
  undefined1 auVar496 [16];
  undefined1 auVar497 [16];
  undefined1 auVar498 [16];
  undefined1 auVar499 [16];
  undefined1 auVar500 [16];
  undefined1 auVar501 [16];
  undefined1 auVar502 [16];
  undefined1 auVar503 [16];
  undefined1 auVar504 [16];
  undefined1 auVar505 [16];
  undefined1 auVar506 [16];
  undefined1 auVar507 [16];
  undefined1 auVar508 [16];
  undefined1 auVar509 [16];
  undefined1 auVar510 [16];
  undefined1 auVar511 [16];
  undefined1 auVar512 [16];
  undefined1 auVar513 [16];
  undefined1 auVar514 [16];
  undefined1 auVar515 [16];
  undefined1 auVar516 [16];
  undefined1 auVar517 [16];
  undefined1 auVar518 [16];
  undefined1 auVar519 [16];
  undefined1 auVar520 [16];
  undefined1 auVar521 [16];
  undefined1 auVar522 [16];
  undefined1 auVar523 [16];
  undefined1 auVar524 [16];
  undefined1 auVar525 [16];
  undefined1 auVar526 [16];
  undefined1 auVar527 [16];
  undefined1 auVar528 [16];
  undefined1 auVar529 [16];
  undefined1 auVar530 [16];
  undefined1 auVar531 [16];
  undefined1 auVar532 [16];
  undefined1 auVar533 [16];
  undefined1 auVar534 [16];
  undefined1 auVar535 [16];
  undefined1 auVar536 [16];
  undefined1 auVar537 [16];
  undefined1 auVar538 [16];
  undefined1 auVar539 [16];
  undefined1 auVar540 [16];
  undefined1 auVar541 [16];
  undefined1 auVar542 [16];
  undefined1 auVar543 [16];
  undefined1 auVar544 [16];
  undefined1 auVar545 [16];
  undefined1 auVar546 [16];
  undefined1 auVar547 [16];
  undefined1 auVar548 [16];
  undefined1 auVar549 [16];
  undefined1 auVar550 [16];
  undefined1 auVar551 [16];
  undefined1 auVar552 [16];
  undefined1 auVar553 [16];
  undefined1 auVar554 [16];
  undefined1 auVar555 [16];
  undefined1 auVar556 [16];
  undefined1 auVar557 [16];
  undefined1 auVar558 [16];
  undefined1 auVar559 [16];
  undefined1 auVar560 [16];
  undefined1 auVar561 [16];
  undefined1 auVar562 [16];
  undefined1 auVar563 [16];
  undefined1 auVar564 [16];
  undefined1 auVar565 [16];
  undefined1 auVar566 [16];
  undefined1 auVar567 [16];
  undefined1 auVar568 [16];
  undefined1 auVar569 [16];
  undefined1 auVar570 [16];
  undefined1 auVar571 [16];
  undefined1 auVar572 [16];
  undefined1 auVar573 [16];
  undefined1 auVar574 [16];
  undefined1 auVar575 [16];
  undefined1 auVar576 [16];
  undefined1 auVar577 [16];
  undefined1 auVar578 [16];
  undefined1 auVar579 [16];
  undefined1 auVar580 [16];
  undefined1 auVar581 [16];
  undefined1 auVar582 [16];
  undefined1 auVar583 [16];
  undefined1 auVar584 [16];
  undefined1 auVar585 [16];
  undefined1 auVar586 [16];
  undefined1 auVar587 [16];
  undefined1 auVar588 [16];
  undefined1 auVar589 [16];
  undefined1 auVar590 [16];
  undefined1 auVar591 [16];
  undefined1 auVar592 [16];
  undefined1 auVar593 [16];
  undefined1 auVar594 [16];
  undefined1 auVar595 [16];
  undefined1 auVar596 [16];
  undefined1 auVar597 [16];
  undefined1 auVar598 [16];
  undefined1 auVar599 [16];
  undefined1 auVar600 [16];
  undefined1 auVar601 [16];
  undefined1 auVar602 [16];
  undefined1 auVar603 [16];
  undefined1 auVar604 [16];
  undefined1 auVar605 [16];
  undefined1 auVar606 [16];
  undefined1 auVar607 [16];
  undefined1 auVar608 [16];
  undefined1 auVar609 [16];
  undefined1 auVar610 [16];
  undefined1 auVar611 [16];
  undefined1 auVar612 [16];
  undefined1 auVar613 [16];
  undefined1 auVar614 [16];
  undefined1 auVar615 [16];
  undefined1 auVar616 [16];
  undefined1 auVar617 [16];
  undefined1 auVar618 [16];
  undefined1 auVar619 [16];
  undefined1 auVar620 [16];
  undefined1 auVar621 [16];
  undefined1 auVar622 [16];
  undefined1 auVar623 [16];
  undefined1 auVar624 [16];
  undefined1 auVar625 [16];
  undefined1 auVar626 [16];
  undefined1 auVar627 [16];
  undefined1 auVar628 [16];
  undefined1 auVar629 [16];
  undefined1 auVar630 [16];
  undefined1 auVar631 [16];
  undefined1 auVar632 [16];
  undefined1 auVar633 [16];
  undefined1 auVar634 [16];
  undefined1 auVar635 [16];
  undefined1 auVar636 [16];
  undefined1 auVar637 [16];
  undefined1 auVar638 [16];
  undefined1 auVar639 [16];
  undefined1 auVar640 [16];
  undefined1 auVar641 [16];
  undefined1 auVar642 [16];
  undefined1 auVar643 [16];
  undefined1 auVar644 [16];
  undefined1 auVar645 [16];
  undefined1 auVar646 [16];
  undefined1 auVar647 [16];
  undefined1 auVar648 [16];
  undefined1 auVar649 [16];
  undefined1 auVar650 [16];
  undefined1 auVar651 [16];
  undefined1 auVar652 [16];
  undefined1 auVar653 [16];
  undefined1 auVar654 [16];
  undefined1 auVar655 [16];
  undefined1 auVar656 [16];
  undefined1 auVar657 [16];
  undefined1 auVar658 [16];
  undefined1 auVar659 [16];
  undefined1 auVar660 [16];
  undefined1 auVar661 [16];
  undefined1 auVar662 [16];
  undefined1 auVar663 [16];
  undefined1 auVar664 [16];
  undefined1 auVar665 [16];
  undefined1 auVar666 [16];
  undefined1 auVar667 [16];
  undefined1 auVar668 [16];
  undefined1 auVar669 [16];
  undefined1 auVar670 [16];
  undefined1 auVar671 [16];
  undefined1 auVar672 [16];
  undefined1 auVar673 [16];
  undefined1 auVar674 [16];
  undefined1 auVar675 [16];
  undefined1 auVar676 [16];
  undefined1 auVar677 [16];
  undefined1 auVar678 [16];
  undefined1 auVar679 [16];
  undefined1 auVar680 [16];
  undefined1 auVar681 [16];
  undefined1 auVar682 [16];
  undefined1 auVar683 [16];
  undefined1 auVar684 [16];
  undefined1 auVar685 [16];
  undefined1 auVar686 [16];
  undefined1 auVar687 [16];
  undefined1 auVar688 [16];
  undefined1 auVar689 [16];
  undefined1 auVar690 [16];
  undefined1 auVar691 [16];
  undefined1 auVar692 [16];
  undefined1 auVar693 [16];
  undefined1 auVar694 [16];
  undefined1 auVar695 [16];
  undefined1 auVar696 [16];
  undefined1 auVar697 [16];
  undefined1 auVar698 [16];
  undefined1 auVar699 [16];
  undefined1 auVar700 [16];
  undefined1 auVar701 [16];
  undefined1 auVar702 [16];
  undefined1 auVar703 [16];
  undefined1 auVar704 [16];
  undefined1 auVar705 [16];
  undefined *puVar706;
  int iVar707;
  int iVar708;
  undefined4 uVar711;
  int iVar712;
  int iVar709;
  long lVar713;
  long lVar714;
  long lVar715;
  long lVar716;
  long lVar717;
  long lVar718;
  long lVar719;
  uint uVar710;
  int extraout_w1;
  int extraout_var;
  undefined8 uVar720;
  undefined8 uVar721;
  long lVar722;
  long lVar723;
  long lVar724;
  long lVar725;
  long lVar726;
  long lVar727;
  long lVar728;
  undefined8 uVar729;
  long lVar730;
  long lVar731;
  long lVar732;
  undefined8 uVar733;
  undefined8 uVar734;
  undefined8 uVar735;
  undefined8 uVar736;
  undefined8 uVar737;
  undefined8 uVar738;
  long lVar739;
  long lVar740;
  long lVar741;
  long *plVar742;
  long lVar743;
  long lVar744;
  long lVar745;
  long lVar746;
  long lVar747;
  long lVar748;
  long lVar749;
  long lVar750;
  long lVar751;
  long lVar752;
  long lVar753;
  long lVar754;
  ulong uVar755;
  long lVar756;
  long lVar757;
  long lVar758;
  long lVar759;
  long lVar760;
  long lVar761;
  long lVar762;
  ulong uVar763;
  long lVar764;
  long lVar765;
  long lVar766;
  long lVar767;
  long lVar768;
  long lVar769;
  long lVar770;
  long lVar771;
  long lVar772;
  long lVar773;
  long lVar774;
  long lVar775;
  long lVar776;
  int iVar777;
  long lVar778;
  ulong uVar779;
  ulong uVar780;
  long lVar781;
  long lVar782;
  long lVar783;
  long lVar784;
  long lVar785;
  long lVar786;
  long lVar787;
  long lVar788;
  long lVar789;
  long lVar790;
  long lVar791;
  long lVar792;
  long lVar793;
  long lVar794;
  long lVar795;
  ulong *puVar796;
  long lVar797;
  long lVar798;
  long lVar799;
  long lVar800;
  long lVar801;
  long lVar802;
  int iVar803;
  undefined4 uVar804;
  uint uVar805;
  undefined8 uVar806;
  undefined1 auVar807 [16];
  undefined1 auVar808 [16];
  undefined8 local_8d0;
  undefined8 local_8c8;
  int local_5f8;
  int iStack_5f4;
  int iStack_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined4 uStack_5e4;
  undefined8 local_5e0;
  ulong uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined1 local_5b0 [16];
  undefined8 local_5a0;
  ulong local_598;
  undefined1 local_590 [16];
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
                    /* try { // try from 05359f0c to 05459f0f has its CatchHandler @ 05359f28 */
                    /* catch() { ... } // from try @ 05359f0c with catch @ 05359f28 */
  if ((DAT_071c15bc & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d40b00);
    FUN_02f07e70(PTR_DAT_06d40b08);
                    /* try { // try from 05359f60 to 05459f87 has its CatchHandler @ 05359f9c */
    FUN_02f07e70(PTR_DAT_06d40b10);
    FUN_02f07e70(PTR_DAT_06d3fb28);
    FUN_02f07e70(PTR_DAT_06d40b18);
                    /* try { // try from 05359f88 to 05459f93 has its CatchHandler @ 05359a28 */
    FUN_02f07e70(PTR_DAT_06d40b20);
                    /* try { // try from 05359f94 to 05459f9b has its CatchHandler @ 05359f9c */
    FUN_02f07e70(PTR_DAT_06d40b28);
                    /* catch() { ... } // from try @ 05359f60 with catch @ 05359f9c
                       catch() { ... } // from try @ 05359f94 with catch @ 05359f9c */
    FUN_02f07e70(PTR_DAT_06d40b30);
    FUN_02f07e70(PTR_DAT_06d3fb30);
    FUN_02f07e70(PTR_DAT_06d40b38);
    FUN_02f07e70(PTR_DAT_06d40b40);
    FUN_02f07e70(PTR_DAT_06d40b48);
    FUN_02f07e70(PTR_DAT_06d404d8);
    FUN_02f07e70(PTR_DAT_06d3fb38);
    FUN_02f07e70(PTR_DAT_06d40b50);
    FUN_02f07e70(PTR_DAT_06d40b58);
    FUN_02f07e70(PTR_DAT_06d40b60);
    FUN_02f07e70(PTR_DAT_06d40b68);
    FUN_02f07e70(PTR_DAT_06d40b70);
    FUN_02f07e70(PTR_DAT_06d40b78);
    FUN_02f07e70(PTR_DAT_06d40b80);
    FUN_02f07e70(PTR_DAT_06d40b88);
    FUN_02f07e70(PTR_DAT_06d3fb40);
    FUN_02f07e70(PTR_DAT_06d40b90);
    FUN_02f07e70(PTR_DAT_06d3fb48);
    FUN_02f07e70(PTR_DAT_06d40b98);
    FUN_02f07e70(PTR_DAT_06d40ba0);
    FUN_02f07e70(PTR_DAT_06d40ba8);
    FUN_02f07e70(PTR_DAT_06d40bb0);
    FUN_02f07e70(PTR_DAT_06d40bb8);
    FUN_02f07e70(PTR_DAT_06d40bc0);
    FUN_02f07e70(PTR_DAT_06d40bc8);
    FUN_02f07e70(PTR_DAT_06d40bd0);
    FUN_02f07e70(PTR_DAT_06d40bd8);
    FUN_02f07e70(PTR_DAT_06d40be0);
    FUN_02f07e70(PTR_DAT_06d40be8);
    FUN_02f07e70(PTR_DAT_06d40bf0);
    FUN_02f07e70(PTR_DAT_06d40bf8);
    FUN_02f07e70(PTR_DAT_06d40c00);
    FUN_02f07e70(PTR_DAT_06d40c08);
    FUN_02f07e70(PTR_DAT_06d40c10);
    FUN_02f07e70(PTR_DAT_06d40c18);
    FUN_02f07e70(PTR_DAT_06d40c20);
    FUN_02f07e70(PTR_DAT_06d40c28);
    FUN_02f07e70(PTR_DAT_06d40c30);
    FUN_02f07e70(PTR_DAT_06d40c38);
    FUN_02f07e70(PTR_DAT_06d40c40);
    FUN_02f07e70(PTR_DAT_06d40c48);
    FUN_02f07e70(PTR_DAT_06d40c50);
    FUN_02f07e70(PTR_DAT_06d40c58);
    FUN_02f07e70(PTR_DAT_06d40c60);
    FUN_02f07e70(PTR_DAT_06d40c68);
    FUN_02f07e70(PTR_DAT_06d40c70);
    FUN_02f07e70(PTR_DAT_06d40c78);
    FUN_02f07e70(PTR_DAT_06d40c80);
    FUN_02f07e70(PTR_DAT_06d40c88);
    FUN_02f07e70(PTR_DAT_06d3fbf8);
    FUN_02f07e70(PTR_DAT_06d3fbc8);
    FUN_02f07e70(PTR_DAT_06d393f8);
    FUN_02f07e70(PTR_DAT_06d40c90);
    FUN_02f07e70(PTR_DAT_06d40c98);
    FUN_02f07e70(PTR_DAT_06d40ca0);
    FUN_02f07e70(PTR_DAT_06d40ca8);
    FUN_02f07e70(PTR_DAT_06d40cb0);
    DAT_071c15bc = 1;
  }
  lVar713 = FUN_0533f874(0);
  lVar714 = FUN_05346100(0);
  lVar715 = FUN_05348a30(0);
  lVar716 = FUN_05345294(0);
  lVar717 = FUN_05348ae8(0);
  lVar718 = FUN_053461ec(0);
  puVar706 = PTR_DAT_06d393f8;
  if (lVar713 == 0) goto LAB_0535dca8;
  lVar778 = *(long *)(lVar713 + 0xb8);
  uVar12 = *(ushort *)(*(long *)(*(long *)PTR_DAT_06d393f8 + 0x20) + 0x135);
  if ((uVar12 & 1) == 0) {
    FUN_02eea768();
    uVar12 = *(ushort *)(*(long *)(*(long *)puVar706 + 0x20) + 0x135);
  }
  iVar712 = *(int *)(lVar778 + 8);
  puVar796 = (ulong *)(lVar713 + 0xc0);
  uVar779 = *puVar796;
  if ((uVar12 & 1) == 0) {
    FUN_02eea768();
  }
  iVar10 = *(int *)(uVar779 + 8);
  if ((iVar712 < 1) && (iVar10 < 1)) {
    return param_2;
  }
  iVar708 = FUN_0536a2ac(lVar713,0);
  iVar709 = FUN_06689e38(0);
  if (iVar709 < 2) {
    iVar709 = 1;
  }
  iVar709 = iVar709 * 5;
  if (iVar10 < 1) {
    auVar807 = ZEXT816(0);
  }
  else {
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042cd218(*(long *)(param_1 + 0xc0) + 0x20,*(undefined8 *)PTR_DAT_06d40ca0);
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042b1eec(*(long *)(param_1 + 0xc0) + 0x28,*(undefined8 *)PTR_DAT_06d3fbc8);
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042cd758(*(long *)(param_1 + 0xc0) + 0x30,*(undefined8 *)PTR_DAT_06d40ca8);
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0535dca8;
    FUN_042b4240(*(long *)(param_1 + 0xc0) + 0x38,*(undefined8 *)PTR_DAT_06d3fbf8);
    puVar706 = PTR_DAT_06d40cb0;
    FUN_042d06f4(lVar713 + 0x30,*(undefined8 *)PTR_DAT_06d40cb0);
    FUN_042d06f4(lVar713 + 0x30,*(undefined8 *)puVar706);
    auVar368._8_8_ = local_590._8_8_;
    auVar368._0_8_ = local_590._0_8_;
    auVar367._8_8_ = local_590._8_8_;
    auVar367._0_8_ = local_590._0_8_;
    auVar366._8_8_ = local_590._8_8_;
    auVar366._0_8_ = local_590._0_8_;
    auVar365._8_8_ = local_590._8_8_;
    auVar365._0_8_ = local_590._0_8_;
    auVar364._8_8_ = local_590._8_8_;
    auVar364._0_8_ = local_590._0_8_;
    auVar363._8_8_ = local_590._8_8_;
    auVar363._0_8_ = local_590._0_8_;
    auVar362._8_8_ = local_590._8_8_;
    auVar362._0_8_ = local_590._0_8_;
    auVar361._8_8_ = local_590._8_8_;
    auVar361._0_8_ = local_590._0_8_;
    auVar360._8_8_ = local_590._8_8_;
    auVar360._0_8_ = local_590._0_8_;
    auVar359._8_8_ = local_590._8_8_;
    auVar359._0_8_ = local_590._0_8_;
    auVar358._8_8_ = local_590._8_8_;
    auVar358._0_8_ = local_590._0_8_;
    auVar357._8_8_ = local_590._8_8_;
    auVar357._0_8_ = local_590._0_8_;
    auVar356._8_8_ = local_590._8_8_;
    auVar356._0_8_ = local_590._0_8_;
    auVar24._8_8_ = local_5b0._8_8_;
    auVar24._0_8_ = local_5b0._0_8_;
    auVar23._8_8_ = local_5b0._8_8_;
    auVar23._0_8_ = local_5b0._0_8_;
    auVar22._8_8_ = local_5b0._8_8_;
    auVar22._0_8_ = local_5b0._0_8_;
    auVar21._8_8_ = local_5b0._8_8_;
    auVar21._0_8_ = local_5b0._0_8_;
    auVar20._8_8_ = local_5b0._8_8_;
    auVar20._0_8_ = local_5b0._0_8_;
    auVar19._8_8_ = local_5b0._8_8_;
    auVar19._0_8_ = local_5b0._0_8_;
    auVar18._8_8_ = local_5b0._8_8_;
    auVar18._0_8_ = local_5b0._0_8_;
    auVar17._8_8_ = local_5b0._8_8_;
    auVar17._0_8_ = local_5b0._0_8_;
    auVar16._8_8_ = local_5b0._8_8_;
    auVar16._0_8_ = local_5b0._0_8_;
    auVar15._8_8_ = local_5b0._8_8_;
    auVar15._0_8_ = local_5b0._0_8_;
    auVar14._8_8_ = local_5b0._8_8_;
    auVar14._0_8_ = local_5b0._0_8_;
    auVar808._8_8_ = local_5b0._8_8_;
    auVar808._0_8_ = local_5b0._0_8_;
    auVar807._8_8_ = local_5b0._8_8_;
    auVar807._0_8_ = local_5b0._0_8_;
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_0535dca8;
    iVar11 = *(int *)(*(long *)(param_1 + 0xc0) + 0x60);
    plVar742 = (long *)(lVar713 + 0x10);
    lVar778 = *plVar742;
    local_5b0 = auVar807;
    local_590 = auVar356;
    if (((((lVar778 == 0) || (local_5b0 = auVar808, local_590 = auVar357, lVar714 == 0)) ||
         (lVar743 = *(long *)(lVar714 + 0x58), local_5b0 = auVar14, local_590 = auVar358,
         lVar743 == 0)) ||
        ((((local_5b0 = auVar15, local_590 = auVar359, lVar715 == 0 ||
           (lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar16, local_590 = auVar360,
           lVar748 == 0)) ||
          ((lVar751 = *(long *)(lVar715 + 0xe0), local_5b0 = auVar17, local_590 = auVar361,
           lVar751 == 0 ||
           ((lVar752 = *(long *)(lVar715 + 0xe8), local_5b0 = auVar18, local_590 = auVar362,
            lVar752 == 0 ||
            (lVar757 = *(long *)(lVar715 + 0xf0), local_5b0 = auVar19, local_590 = auVar363,
            lVar757 == 0)))))) ||
         (lVar760 = *(long *)(lVar715 + 0xf8), local_5b0 = auVar20, local_590 = auVar364,
         lVar760 == 0)))) ||
       ((((lVar764 = *(long *)(lVar715 + 0x100), local_5b0 = auVar21, local_590 = auVar365,
          lVar764 == 0 ||
          (lVar768 = *(long *)(lVar715 + 0x108), local_5b0 = auVar22, local_590 = auVar366,
          lVar768 == 0)) ||
         (lVar772 = *(long *)(lVar715 + 0x118), local_5b0 = auVar23, local_590 = auVar367,
         lVar772 == 0)) ||
        (lVar719 = *(long *)(lVar715 + 0x120), local_5b0 = auVar24, local_590 = auVar368,
        lVar719 == 0)))) goto LAB_0535dca8;
    local_5e0 = *(ulong *)(lVar778 + 0x18);
    uStack_5d8 = *(ulong *)(lVar743 + 0x10);
    local_5d0 = *(undefined8 *)(lVar743 + 0x18);
    iVar13 = iVar709 * iVar10;
    uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
    local_5c0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
    local_5a0 = *(undefined8 *)(lVar752 + 0x18);
    local_598 = *(ulong *)(lVar757 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar760 + 0x10);
    local_580 = *(undefined8 *)(lVar760 + 0x18);
    local_578 = *(undefined8 *)(lVar764 + 0x10);
    local_570 = *(undefined8 *)(lVar764 + 0x18);
    uStack_568 = *(undefined8 *)(lVar768 + 0x10);
    local_560 = *(undefined8 *)(lVar768 + 0x18);
    local_558 = *(undefined8 *)(lVar772 + 0x10);
    uStack_550 = *(undefined8 *)(lVar772 + 0x18);
    local_548 = *(undefined8 *)(lVar719 + 0x10);
    uStack_540 = *(undefined8 *)(lVar719 + 0x18);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
    iStack_5f4 = 0;
    iStack_5f0 = (int)*(undefined8 *)(lVar713 + 0xc0);
    uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar713 + 0xc0) >> 0x20);
    local_5f8 = iVar709;
    auVar807 = FUN_03abcf88(&local_5f8,iVar13,1,param_2,param_3,*(undefined8 *)PTR_DAT_06d40c20);
    lVar778 = FUN_053461ec(0);
    auVar373._8_8_ = local_590._8_8_;
    auVar373._0_8_ = local_590._0_8_;
    auVar372._8_8_ = local_590._8_8_;
    auVar372._0_8_ = local_590._0_8_;
    auVar371._8_8_ = local_590._8_8_;
    auVar371._0_8_ = local_590._0_8_;
    auVar370._8_8_ = local_590._8_8_;
    auVar370._0_8_ = local_590._0_8_;
    auVar369._8_8_ = local_590._8_8_;
    auVar369._0_8_ = local_590._0_8_;
    auVar29._8_8_ = local_5b0._8_8_;
    auVar29._0_8_ = local_5b0._0_8_;
    auVar28._8_8_ = local_5b0._8_8_;
    auVar28._0_8_ = local_5b0._0_8_;
    auVar27._8_8_ = local_5b0._8_8_;
    auVar27._0_8_ = local_5b0._0_8_;
    auVar26._8_8_ = local_5b0._8_8_;
    auVar26._0_8_ = local_5b0._0_8_;
    auVar25._8_8_ = local_5b0._8_8_;
    auVar25._0_8_ = local_5b0._0_8_;
    if ((((lVar778 == 0) ||
         (lVar743 = *plVar742, local_5b0 = auVar25, local_590 = auVar369, lVar743 == 0)) ||
        ((lVar748 = *(long *)(lVar713 + 0x48), local_5b0 = auVar26, local_590 = auVar370,
         lVar748 == 0 ||
         ((lVar751 = *(long *)(lVar713 + 0x18), local_5b0 = auVar27, local_590 = auVar371,
          lVar751 == 0 ||
          (lVar752 = *(long *)(lVar713 + 0x40), local_5b0 = auVar28, local_590 = auVar372,
          lVar752 == 0)))))) || (local_5b0 = auVar29, local_590 = auVar373, lVar716 == 0))
    goto LAB_0535dca8;
    iVar803 = *(int *)(lVar778 + 0x28);
    uVar780 = *puVar796;
    uVar721 = *(undefined8 *)(lVar743 + 0x10);
    uVar755 = *(ulong *)(lVar743 + 0x18);
    uVar779 = *(ulong *)(lVar748 + 0x10);
    uVar729 = *(undefined8 *)(lVar748 + 0x18);
    uVar806 = *(undefined8 *)(lVar751 + 0x10);
    uVar733 = *(undefined8 *)(lVar751 + 0x18);
    uVar720 = *(undefined8 *)(lVar752 + 0x10);
    uVar734 = *(undefined8 *)(lVar752 + 0x18);
    uVar710 = FUN_05369508(lVar716,0);
    auVar381._8_8_ = local_590._8_8_;
    auVar381._0_8_ = local_590._0_8_;
    auVar380._8_8_ = local_590._8_8_;
    auVar380._0_8_ = local_590._0_8_;
    auVar379._8_8_ = local_590._8_8_;
    auVar379._0_8_ = local_590._0_8_;
    auVar378._8_8_ = local_590._8_8_;
    auVar378._0_8_ = local_590._0_8_;
    auVar377._8_8_ = local_590._8_8_;
    auVar377._0_8_ = local_590._0_8_;
    auVar376._8_8_ = local_590._8_8_;
    auVar376._0_8_ = local_590._0_8_;
    auVar375._8_8_ = local_590._8_8_;
    auVar375._0_8_ = local_590._0_8_;
    auVar374._8_8_ = local_590._8_8_;
    auVar374._0_8_ = local_590._0_8_;
    auVar37._8_8_ = local_5b0._8_8_;
    auVar37._0_8_ = local_5b0._0_8_;
    auVar36._8_8_ = local_5b0._8_8_;
    auVar36._0_8_ = local_5b0._0_8_;
    auVar35._8_8_ = local_5b0._8_8_;
    auVar35._0_8_ = local_5b0._0_8_;
    auVar34._8_8_ = local_5b0._8_8_;
    auVar34._0_8_ = local_5b0._0_8_;
    auVar33._8_8_ = local_5b0._8_8_;
    auVar33._0_8_ = local_5b0._0_8_;
    auVar32._8_8_ = local_5b0._8_8_;
    auVar32._0_8_ = local_5b0._0_8_;
    auVar31._8_8_ = local_5b0._8_8_;
    auVar31._0_8_ = local_5b0._0_8_;
    auVar30._8_8_ = local_5b0._8_8_;
    auVar30._0_8_ = local_5b0._0_8_;
    lVar778 = *(long *)(lVar716 + 0x10);
    if (((((lVar778 == 0) ||
          (lVar743 = *(long *)(lVar714 + 0x28), local_5b0 = auVar30, local_590 = auVar374,
          lVar743 == 0)) ||
         (lVar748 = *(long *)(lVar714 + 0x30), local_5b0 = auVar31, local_590 = auVar375,
         lVar748 == 0)) ||
        (((lVar751 = *(long *)(lVar714 + 0x38), local_5b0 = auVar32, local_590 = auVar376,
          lVar751 == 0 ||
          (lVar752 = *(long *)(lVar715 + 0x118), local_5b0 = auVar33, local_590 = auVar377,
          lVar752 == 0)) ||
         ((lVar757 = *(long *)(lVar715 + 0x120), local_5b0 = auVar34, local_590 = auVar378,
          lVar757 == 0 ||
          ((lVar760 = *(long *)(lVar715 + 0x30), local_5b0 = auVar35, local_590 = auVar379,
           lVar760 == 0 ||
           (local_5b0 = auVar36, local_590 = auVar380, *(long *)(param_1 + 0xa8) == 0)))))))) ||
       (lVar764 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10), local_5b0 = auVar37,
       local_590 = auVar381, lVar764 == 0)) goto LAB_0535dca8;
    local_5a0 = *(undefined8 *)(lVar778 + 0x10);
    local_598 = *(ulong *)(lVar778 + 0x18);
    local_590._0_8_ = *(undefined8 *)(lVar743 + 0x10);
    local_590._8_8_ = *(undefined8 *)(lVar743 + 0x18);
    local_580 = *(undefined8 *)(lVar748 + 0x10);
    local_578 = *(undefined8 *)(lVar748 + 0x18);
    local_570 = *(undefined8 *)(lVar751 + 0x10);
    uStack_568 = *(undefined8 *)(lVar751 + 0x18);
    local_560 = *(undefined8 *)(lVar752 + 0x10);
    local_558 = *(undefined8 *)(lVar752 + 0x18);
    uStack_550 = *(undefined8 *)(lVar757 + 0x10);
    local_548 = *(undefined8 *)(lVar757 + 0x18);
    uStack_540 = *(undefined8 *)(lVar760 + 0x10);
    local_538 = *(undefined8 *)(lVar760 + 0x18);
    uStack_530 = *(undefined8 *)(lVar764 + 0x10);
    local_528 = *(undefined8 *)(lVar764 + 0x18);
    iStack_5f4 = 0;
    iStack_5f0 = (int)uVar780;
    uStack_5ec = (undefined4)(uVar780 >> 0x20);
    uStack_5e8 = (undefined4)uVar721;
    uStack_5e4 = (undefined4)((ulong)uVar721 >> 0x20);
    local_5b0._12_4_ = 0;
    local_5b0._8_4_ = uVar710;
    local_5f8 = iVar803;
    local_5e0 = uVar755;
    uStack_5d8 = uVar779;
    local_5d0 = uVar729;
    uStack_5c8 = uVar806;
    local_5c0 = uVar733;
    uStack_5b8 = uVar720;
    local_5b0._0_8_ = uVar734;
    auVar807 = FUN_03abd028(&local_5f8,iVar10,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c28);
    auVar419._8_8_ = local_590._8_8_;
    auVar419._0_8_ = local_590._0_8_;
    auVar418._8_8_ = local_590._8_8_;
    auVar418._0_8_ = local_590._0_8_;
    auVar417._8_8_ = local_590._8_8_;
    auVar417._0_8_ = local_590._0_8_;
    auVar416._8_8_ = local_590._8_8_;
    auVar416._0_8_ = local_590._0_8_;
    auVar415._8_8_ = local_590._8_8_;
    auVar415._0_8_ = local_590._0_8_;
    auVar414._8_8_ = local_590._8_8_;
    auVar414._0_8_ = local_590._0_8_;
    auVar413._8_8_ = local_590._8_8_;
    auVar413._0_8_ = local_590._0_8_;
    auVar412._8_8_ = local_590._8_8_;
    auVar412._0_8_ = local_590._0_8_;
    auVar411._8_8_ = local_590._8_8_;
    auVar411._0_8_ = local_590._0_8_;
    auVar410._8_8_ = local_590._8_8_;
    auVar410._0_8_ = local_590._0_8_;
    auVar409._8_8_ = local_590._8_8_;
    auVar409._0_8_ = local_590._0_8_;
    auVar408._8_8_ = local_590._8_8_;
    auVar408._0_8_ = local_590._0_8_;
    auVar407._8_8_ = local_590._8_8_;
    auVar407._0_8_ = local_590._0_8_;
    auVar406._8_8_ = local_590._8_8_;
    auVar406._0_8_ = local_590._0_8_;
    auVar405._8_8_ = local_590._8_8_;
    auVar405._0_8_ = local_590._0_8_;
    auVar404._8_8_ = local_590._8_8_;
    auVar404._0_8_ = local_590._0_8_;
    auVar403._8_8_ = local_590._8_8_;
    auVar403._0_8_ = local_590._0_8_;
    auVar402._8_8_ = local_590._8_8_;
    auVar402._0_8_ = local_590._0_8_;
    auVar401._8_8_ = local_590._8_8_;
    auVar401._0_8_ = local_590._0_8_;
    auVar400._8_8_ = local_590._8_8_;
    auVar400._0_8_ = local_590._0_8_;
    auVar399._8_8_ = local_590._8_8_;
    auVar399._0_8_ = local_590._0_8_;
    auVar398._8_8_ = local_590._8_8_;
    auVar398._0_8_ = local_590._0_8_;
    auVar397._8_8_ = local_590._8_8_;
    auVar397._0_8_ = local_590._0_8_;
    auVar396._8_8_ = local_590._8_8_;
    auVar396._0_8_ = local_590._0_8_;
    auVar395._8_8_ = local_590._8_8_;
    auVar395._0_8_ = local_590._0_8_;
    auVar394._8_8_ = local_590._8_8_;
    auVar394._0_8_ = local_590._0_8_;
    auVar393._8_8_ = local_590._8_8_;
    auVar393._0_8_ = local_590._0_8_;
    auVar392._8_8_ = local_590._8_8_;
    auVar392._0_8_ = local_590._0_8_;
    auVar391._8_8_ = local_590._8_8_;
    auVar391._0_8_ = local_590._0_8_;
    auVar390._8_8_ = local_590._8_8_;
    auVar390._0_8_ = local_590._0_8_;
    auVar389._8_8_ = local_590._8_8_;
    auVar389._0_8_ = local_590._0_8_;
    auVar388._8_8_ = local_590._8_8_;
    auVar388._0_8_ = local_590._0_8_;
    auVar387._8_8_ = local_590._8_8_;
    auVar387._0_8_ = local_590._0_8_;
    auVar386._8_8_ = local_590._8_8_;
    auVar386._0_8_ = local_590._0_8_;
    auVar385._8_8_ = local_590._8_8_;
    auVar385._0_8_ = local_590._0_8_;
    auVar384._8_8_ = local_590._8_8_;
    auVar384._0_8_ = local_590._0_8_;
    auVar383._8_8_ = local_590._8_8_;
    auVar383._0_8_ = local_590._0_8_;
    auVar382._8_8_ = local_590._8_8_;
    auVar382._0_8_ = local_590._0_8_;
    auVar75._8_8_ = local_5b0._8_8_;
    auVar75._0_8_ = local_5b0._0_8_;
    auVar74._8_8_ = local_5b0._8_8_;
    auVar74._0_8_ = local_5b0._0_8_;
    auVar73._8_8_ = local_5b0._8_8_;
    auVar73._0_8_ = local_5b0._0_8_;
    auVar72._8_8_ = local_5b0._8_8_;
    auVar72._0_8_ = local_5b0._0_8_;
    auVar71._8_8_ = local_5b0._8_8_;
    auVar71._0_8_ = local_5b0._0_8_;
    auVar70._8_8_ = local_5b0._8_8_;
    auVar70._0_8_ = local_5b0._0_8_;
    auVar69._8_8_ = local_5b0._8_8_;
    auVar69._0_8_ = local_5b0._0_8_;
    auVar68._8_8_ = local_5b0._8_8_;
    auVar68._0_8_ = local_5b0._0_8_;
    auVar67._8_8_ = local_5b0._8_8_;
    auVar67._0_8_ = local_5b0._0_8_;
    auVar66._8_8_ = local_5b0._8_8_;
    auVar66._0_8_ = local_5b0._0_8_;
    auVar65._8_8_ = local_5b0._8_8_;
    auVar65._0_8_ = local_5b0._0_8_;
    auVar64._8_8_ = local_5b0._8_8_;
    auVar64._0_8_ = local_5b0._0_8_;
    auVar63._8_8_ = local_5b0._8_8_;
    auVar63._0_8_ = local_5b0._0_8_;
    auVar62._8_8_ = local_5b0._8_8_;
    auVar62._0_8_ = local_5b0._0_8_;
    auVar61._8_8_ = local_5b0._8_8_;
    auVar61._0_8_ = local_5b0._0_8_;
    auVar60._8_8_ = local_5b0._8_8_;
    auVar60._0_8_ = local_5b0._0_8_;
    auVar59._8_8_ = local_5b0._8_8_;
    auVar59._0_8_ = local_5b0._0_8_;
    auVar58._8_8_ = local_5b0._8_8_;
    auVar58._0_8_ = local_5b0._0_8_;
    auVar57._8_8_ = local_5b0._8_8_;
    auVar57._0_8_ = local_5b0._0_8_;
    auVar56._8_8_ = local_5b0._8_8_;
    auVar56._0_8_ = local_5b0._0_8_;
    auVar55._8_8_ = local_5b0._8_8_;
    auVar55._0_8_ = local_5b0._0_8_;
    auVar54._8_8_ = local_5b0._8_8_;
    auVar54._0_8_ = local_5b0._0_8_;
    auVar53._8_8_ = local_5b0._8_8_;
    auVar53._0_8_ = local_5b0._0_8_;
    auVar52._8_8_ = local_5b0._8_8_;
    auVar52._0_8_ = local_5b0._0_8_;
    auVar51._8_8_ = local_5b0._8_8_;
    auVar51._0_8_ = local_5b0._0_8_;
    auVar50._8_8_ = local_5b0._8_8_;
    auVar50._0_8_ = local_5b0._0_8_;
    auVar49._8_8_ = local_5b0._8_8_;
    auVar49._0_8_ = local_5b0._0_8_;
    auVar48._8_8_ = local_5b0._8_8_;
    auVar48._0_8_ = local_5b0._0_8_;
    auVar47._8_8_ = local_5b0._8_8_;
    auVar47._0_8_ = local_5b0._0_8_;
    auVar46._8_8_ = local_5b0._8_8_;
    auVar46._0_8_ = local_5b0._0_8_;
    auVar45._8_8_ = local_5b0._8_8_;
    auVar45._0_8_ = local_5b0._0_8_;
    auVar44._8_8_ = local_5b0._8_8_;
    auVar44._0_8_ = local_5b0._0_8_;
    auVar43._8_8_ = local_5b0._8_8_;
    auVar43._0_8_ = local_5b0._0_8_;
    auVar42._8_8_ = local_5b0._8_8_;
    auVar42._0_8_ = local_5b0._0_8_;
    auVar41._8_8_ = local_5b0._8_8_;
    auVar41._0_8_ = local_5b0._0_8_;
    auVar40._8_8_ = local_5b0._8_8_;
    auVar40._0_8_ = local_5b0._0_8_;
    auVar39._8_8_ = local_5b0._8_8_;
    auVar39._0_8_ = local_5b0._0_8_;
    auVar38._8_8_ = local_5b0._8_8_;
    auVar38._0_8_ = local_5b0._0_8_;
    lVar778 = *plVar742;
    if ((((((lVar778 == 0) ||
           (lVar743 = *(long *)(lVar713 + 0x48), local_5b0 = auVar38, local_590 = auVar382,
           lVar743 == 0)) ||
          (lVar748 = *(long *)(lVar713 + 0x40), local_5b0 = auVar39, local_590 = auVar383,
          lVar748 == 0)) ||
         ((lVar751 = *(long *)(lVar714 + 0x28), local_5b0 = auVar40, local_590 = auVar384,
          lVar751 == 0 ||
          (lVar752 = *(long *)(lVar714 + 0x30), local_5b0 = auVar41, local_590 = auVar385,
          lVar752 == 0)))) ||
        ((((((lVar757 = *(long *)(lVar714 + 0x38), local_5b0 = auVar42, local_590 = auVar386,
             lVar757 == 0 ||
             ((lVar760 = *(long *)(lVar714 + 0x40), local_5b0 = auVar43, local_590 = auVar387,
              lVar760 == 0 ||
              (lVar764 = *(long *)(lVar714 + 0x48), local_5b0 = auVar44, local_590 = auVar388,
              lVar764 == 0)))) ||
            (lVar768 = *(long *)(lVar714 + 0x50), local_5b0 = auVar45, local_590 = auVar389,
            lVar768 == 0)) ||
           (((((lVar772 = *(long *)(lVar715 + 0x118), local_5b0 = auVar46, local_590 = auVar390,
               lVar772 == 0 ||
               (lVar719 = *(long *)(lVar715 + 0x120), local_5b0 = auVar47, local_590 = auVar391,
               lVar719 == 0)) ||
              (lVar788 = *(long *)(lVar715 + 0x38), local_5b0 = auVar48, local_590 = auVar392,
              lVar788 == 0)) ||
             ((lVar790 = *(long *)(param_1 + 0x18), local_5b0 = auVar49, local_590 = auVar393,
              lVar790 == 0 ||
              (lVar791 = *(long *)(param_1 + 0x20), local_5b0 = auVar50, local_590 = auVar394,
              lVar791 == 0)))) ||
            ((lVar793 = *(long *)(param_1 + 0x28), local_5b0 = auVar51, local_590 = auVar395,
             lVar793 == 0 ||
             ((lVar753 = *(long *)(param_1 + 0x30), local_5b0 = auVar52, local_590 = auVar396,
              lVar753 == 0 ||
              (lVar758 = *(long *)(param_1 + 0x38), local_5b0 = auVar53, local_590 = auVar397,
              lVar758 == 0)))))))) ||
          ((lVar744 = *(long *)(param_1 + 0x40), local_5b0 = auVar54, local_590 = auVar398,
           lVar744 == 0 ||
           (((((lVar749 = *(long *)(param_1 + 0x48), local_5b0 = auVar55, local_590 = auVar399,
               lVar749 == 0 ||
               (lVar726 = *(long *)(param_1 + 0x50), local_5b0 = auVar56, local_590 = auVar400,
               lVar726 == 0)) ||
              (lVar781 = *(long *)(param_1 + 0x58), local_5b0 = auVar57, local_590 = auVar401,
              lVar781 == 0)) ||
             (((lVar761 = *(long *)(param_1 + 0x60), local_5b0 = auVar58, local_590 = auVar402,
               lVar761 == 0 ||
               (lVar799 = *(long *)(param_1 + 0x68), local_5b0 = auVar59, local_590 = auVar403,
               lVar799 == 0)) ||
              ((lVar801 = *(long *)(param_1 + 0x70), local_5b0 = auVar60, local_590 = auVar404,
               lVar801 == 0 ||
               ((lVar802 = *(long *)(param_1 + 0x78), local_5b0 = auVar61, local_590 = auVar405,
                lVar802 == 0 ||
                (lVar724 = *(long *)(param_1 + 0x80), local_5b0 = auVar62, local_590 = auVar406,
                lVar724 == 0)))))))) || (local_5b0 = auVar63, local_590 = auVar407, lVar717 == 0))))
          )) || (((lVar797 = *(long *)(lVar717 + 0x18), local_5b0 = auVar64, local_590 = auVar408,
                  lVar797 == 0 ||
                  (lVar727 = *(long *)(lVar717 + 0x20), local_5b0 = auVar65, local_590 = auVar409,
                  lVar727 == 0)) ||
                 (lVar782 = *(long *)(lVar717 + 0x30), local_5b0 = auVar66, local_590 = auVar410,
                 lVar782 == 0)))))) ||
       ((((lVar732 = *(long *)(lVar717 + 0x38), local_5b0 = auVar67, local_590 = auVar411,
          lVar732 == 0 ||
          (lVar745 = *(long *)(lVar717 + 0x40), local_5b0 = auVar68, local_590 = auVar412,
          lVar745 == 0)) ||
         ((lVar750 = *(long *)(lVar717 + 0x48), local_5b0 = auVar69, local_590 = auVar413,
          lVar750 == 0 ||
          ((lVar754 = *(long *)(lVar717 + 0x50), local_5b0 = auVar70, local_590 = auVar414,
           lVar754 == 0 ||
           (lVar759 = *(long *)(lVar717 + 0x58), local_5b0 = auVar71, local_590 = auVar415,
           lVar759 == 0)))))) ||
        ((lVar792 = *(long *)(lVar717 + 0x60), local_5b0 = auVar72, local_590 = auVar416,
         lVar792 == 0 ||
         (((lVar787 = *(long *)(lVar717 + 0x68), local_5b0 = auVar73, local_590 = auVar417,
           lVar787 == 0 ||
           (lVar789 = *(long *)(lVar717 + 0x70), local_5b0 = auVar74, local_590 = auVar418,
           lVar789 == 0)) ||
          (lVar762 = *(long *)(lVar717 + 0x78), local_5b0 = auVar75, local_590 = auVar419,
          lVar762 == 0)))))))) goto LAB_0535dca8;
    local_5e0 = *(ulong *)(lVar778 + 0x18);
    uStack_5d8 = *(ulong *)(lVar743 + 0x10);
    local_5d0 = *(undefined8 *)(lVar743 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
    local_5c0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
    local_3d8 = *(undefined8 *)(lVar759 + 0x10);
    local_3d0 = *(undefined8 *)(lVar759 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
    local_5a0 = *(undefined8 *)(lVar752 + 0x18);
    local_598 = *(ulong *)(lVar757 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
    local_3f8 = *(undefined8 *)(lVar750 + 0x10);
    local_3f0 = *(undefined8 *)(lVar750 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar760 + 0x10);
    local_580 = *(undefined8 *)(lVar760 + 0x18);
    local_578 = *(undefined8 *)(lVar764 + 0x10);
    local_570 = *(undefined8 *)(lVar764 + 0x18);
    uStack_568 = *(undefined8 *)(lVar768 + 0x10);
    local_560 = *(undefined8 *)(lVar768 + 0x18);
    local_408 = *(undefined8 *)(lVar745 + 0x10);
    local_400 = *(undefined8 *)(lVar745 + 0x18);
    local_3a8 = *(undefined8 *)(lVar789 + 0x10);
    local_3a0 = *(undefined8 *)(lVar789 + 0x18);
    local_558 = *(undefined8 *)(lVar772 + 0x10);
    uStack_550 = *(undefined8 *)(lVar772 + 0x18);
    local_548 = *(undefined8 *)(lVar719 + 0x10);
    uStack_540 = *(undefined8 *)(lVar719 + 0x18);
    local_418 = *(undefined8 *)(lVar732 + 0x10);
    local_410 = *(undefined8 *)(lVar732 + 0x18);
    local_538 = *(undefined8 *)(lVar788 + 0x10);
    uStack_530 = *(undefined8 *)(lVar788 + 0x18);
    local_528 = *(undefined8 *)(lVar790 + 0x10);
    uStack_520 = *(undefined8 *)(lVar790 + 0x18);
    local_518 = *(undefined8 *)(lVar791 + 0x10);
    uStack_510 = *(undefined8 *)(lVar791 + 0x18);
    local_508 = *(undefined8 *)(lVar793 + 0x10);
    uStack_500 = *(undefined8 *)(lVar793 + 0x18);
    local_4f8 = *(undefined8 *)(lVar753 + 0x10);
    uStack_4f0 = *(undefined8 *)(lVar753 + 0x18);
    local_4e8 = *(undefined8 *)(lVar758 + 0x10);
    uStack_4e0 = *(undefined8 *)(lVar758 + 0x18);
    local_4d8 = *(undefined8 *)(lVar744 + 0x10);
    uStack_4d0 = *(undefined8 *)(lVar744 + 0x18);
    local_4c8 = *(undefined8 *)(lVar749 + 0x10);
    uStack_4c0 = *(undefined8 *)(lVar749 + 0x18);
    local_4b8 = *(undefined8 *)(lVar726 + 0x10);
    uStack_4b0 = *(undefined8 *)(lVar726 + 0x18);
    local_4a8 = *(undefined8 *)(lVar781 + 0x10);
    uStack_4a0 = *(undefined8 *)(lVar781 + 0x18);
    local_498 = *(undefined8 *)(lVar761 + 0x10);
    uStack_490 = *(undefined8 *)(lVar761 + 0x18);
    local_488 = *(undefined8 *)(lVar799 + 0x10);
    local_3c8 = *(undefined8 *)(lVar792 + 0x10);
    local_3c0 = *(undefined8 *)(lVar792 + 0x18);
    uStack_480 = *(undefined8 *)(lVar799 + 0x18);
    local_478 = *(undefined8 *)(lVar801 + 0x10);
    local_470 = *(undefined8 *)(lVar801 + 0x18);
    uStack_438 = *(undefined8 *)(lVar727 + 0x10);
    local_430 = *(undefined8 *)(lVar727 + 0x18);
    uStack_468 = *(undefined8 *)(lVar802 + 0x10);
    local_460 = *(undefined8 *)(lVar802 + 0x18);
    uStack_458 = *(undefined8 *)(lVar724 + 0x10);
    local_450 = *(undefined8 *)(lVar724 + 0x18);
    local_3e8 = *(undefined8 *)(lVar754 + 0x10);
    local_3e0 = *(undefined8 *)(lVar754 + 0x18);
    local_3b8 = *(undefined8 *)(lVar787 + 0x10);
    local_3b0 = *(undefined8 *)(lVar787 + 0x18);
    uStack_448 = *(undefined8 *)(lVar797 + 0x10);
    local_440 = *(undefined8 *)(lVar797 + 0x18);
    local_428 = *(undefined8 *)(lVar782 + 0x10);
    local_420 = *(undefined8 *)(lVar782 + 0x18);
    local_398 = *(undefined8 *)(lVar762 + 0x10);
    local_390 = *(undefined8 *)(lVar762 + 0x18);
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    bVar1 = 0 < iVar11;
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
    bVar2 = 0 < extraout_var;
    iStack_5f4 = 0;
    local_5f8 = iVar709;
    auVar807 = FUN_03abd0c8(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c30);
    bVar3 = 0 < iVar708;
    if ((bVar3 && bVar2) && bVar1) {
      iVar803 = FUN_066d1868(0);
      auVar422._8_8_ = local_590._8_8_;
      auVar422._0_8_ = local_590._0_8_;
      auVar421._8_8_ = local_590._8_8_;
      auVar421._0_8_ = local_590._0_8_;
      auVar420._8_8_ = local_590._8_8_;
      auVar420._0_8_ = local_590._0_8_;
      auVar78._8_8_ = local_5b0._8_8_;
      auVar78._0_8_ = local_5b0._0_8_;
      auVar77._8_8_ = local_5b0._8_8_;
      auVar77._0_8_ = local_5b0._0_8_;
      auVar76._8_8_ = local_5b0._8_8_;
      auVar76._0_8_ = local_5b0._0_8_;
      lVar778 = *plVar742;
      if (((lVar778 == 0) ||
          (lVar743 = *(long *)(param_1 + 0xc0), local_5b0 = auVar76, local_590 = auVar420,
          lVar743 == 0)) ||
         ((lVar748 = *(long *)(lVar743 + 0x10), local_5b0 = auVar77, local_590 = auVar421,
          lVar748 == 0 ||
          (lVar751 = *(long *)(lVar743 + 0x18), local_5b0 = auVar78, local_590 = auVar422,
          lVar751 == 0)))) goto LAB_0535dca8;
      uVar779 = *(ulong *)(lVar778 + 0x10);
      uVar755 = *(ulong *)(lVar778 + 0x18);
      uVar780 = *puVar796;
      uVar721 = *(undefined8 *)(lVar748 + 0x10);
      uVar720 = *(undefined8 *)(lVar748 + 0x18);
      uVar806 = *(undefined8 *)(lVar751 + 0x10);
      uVar729 = *(undefined8 *)(lVar751 + 0x18);
      local_5b0 = FUN_042cd940(lVar743 + 0x30,*(undefined8 *)PTR_DAT_06d40c98);
      local_5f8 = 0;
      uStack_5ec = 0;
      uStack_5e8 = (undefined4)uVar780;
      uStack_5e4 = (undefined4)(uVar780 >> 0x20);
      iStack_5f4 = iVar709;
      iStack_5f0 = iVar803 % 2;
      local_5e0 = uVar779;
      uStack_5d8 = uVar755;
      local_5d0 = uVar721;
      uStack_5c8 = uVar720;
      local_5c0 = uVar806;
      uStack_5b8 = uVar729;
      auVar808 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<CullingSplit>
                           (&local_5f8,iVar13,1,param_2,param_3,*(undefined8 *)PTR_DAT_06d40bc8);
      lVar778 = *(long *)(param_1 + 0xc0);
      if (lVar778 == 0) goto LAB_0535dca8;
      auVar808 = FUN_03ab3674(*(undefined8 *)(lVar778 + 0x30),*(undefined8 *)(lVar778 + 0x38),
                              auVar808._0_8_,auVar808._8_8_,*(undefined8 *)PTR_DAT_06d40b98);
    }
    else {
      auVar808 = ZEXT816(0);
    }
    uVar721 = DAT_013f6080;
    local_8c8 = auVar808._8_8_;
    local_8d0 = auVar808._0_8_;
    if (0 < iVar708) {
      if (lVar718 == 0) goto LAB_0535dca8;
      puVar4 = (undefined8 *)(param_1 + 200);
      puVar5 = (undefined8 *)(param_1 + 0xd8);
      puVar6 = (undefined8 *)(param_1 + 0xe8);
      puVar7 = (undefined8 *)(param_1 + 0xf8);
      puVar8 = (undefined8 *)(param_1 + 0x118);
      puVar9 = (undefined8 *)(param_1 + 0x108);
      iVar803 = 0;
      do {
        auVar437._8_8_ = local_590._8_8_;
        auVar437._0_8_ = local_590._0_8_;
        auVar436._8_8_ = local_590._8_8_;
        auVar436._0_8_ = local_590._0_8_;
        auVar435._8_8_ = local_590._8_8_;
        auVar435._0_8_ = local_590._0_8_;
        auVar434._8_8_ = local_590._8_8_;
        auVar434._0_8_ = local_590._0_8_;
        auVar433._8_8_ = local_590._8_8_;
        auVar433._0_8_ = local_590._0_8_;
        auVar432._8_8_ = local_590._8_8_;
        auVar432._0_8_ = local_590._0_8_;
        auVar431._8_8_ = local_590._8_8_;
        auVar431._0_8_ = local_590._0_8_;
        auVar430._8_8_ = local_590._8_8_;
        auVar430._0_8_ = local_590._0_8_;
        auVar429._8_8_ = local_590._8_8_;
        auVar429._0_8_ = local_590._0_8_;
        auVar428._8_8_ = local_590._8_8_;
        auVar428._0_8_ = local_590._0_8_;
        auVar427._8_8_ = local_590._8_8_;
        auVar427._0_8_ = local_590._0_8_;
        auVar426._8_8_ = local_590._8_8_;
        auVar426._0_8_ = local_590._0_8_;
        auVar425._8_8_ = local_590._8_8_;
        auVar425._0_8_ = local_590._0_8_;
        auVar424._8_8_ = local_590._8_8_;
        auVar424._0_8_ = local_590._0_8_;
        auVar423._8_8_ = local_590._8_8_;
        auVar423._0_8_ = local_590._0_8_;
        lVar778 = *plVar742;
        if (((lVar778 == 0) ||
            (lVar743 = *(long *)(lVar713 + 0x48), local_590 = auVar423, lVar743 == 0)) ||
           (((lVar748 = *(long *)(lVar713 + 0x18), local_590 = auVar424, lVar748 == 0 ||
             (((((((lVar751 = *(long *)(lVar713 + 0x40), local_590 = auVar425, lVar751 == 0 ||
                   (lVar752 = *(long *)(lVar717 + 0x18), local_590 = auVar426, lVar752 == 0)) ||
                  (lVar757 = *(long *)(lVar717 + 0x28), local_590 = auVar427, lVar757 == 0)) ||
                 ((lVar760 = *(long *)(lVar717 + 0x30), local_590 = auVar428, lVar760 == 0 ||
                  (lVar764 = *(long *)(lVar717 + 0x38), local_590 = auVar429, lVar764 == 0)))) ||
                (lVar768 = *(long *)(lVar717 + 0x40), local_590 = auVar430, lVar768 == 0)) ||
               ((lVar772 = *(long *)(lVar717 + 0x48), local_590 = auVar431, lVar772 == 0 ||
                (lVar719 = *(long *)(lVar717 + 0x50), local_590 = auVar432, lVar719 == 0)))) ||
              (lVar788 = *(long *)(lVar717 + 0x58), local_590 = auVar433, lVar788 == 0)))) ||
            ((((lVar790 = *(long *)(lVar717 + 0x60), local_590 = auVar434, lVar790 == 0 ||
               (lVar791 = *(long *)(lVar717 + 0x68), local_590 = auVar435, lVar791 == 0)) ||
              (lVar793 = *(long *)(lVar717 + 0x70), local_590 = auVar436, lVar793 == 0)) ||
             (lVar753 = *(long *)(lVar717 + 0x90), local_590 = auVar437, lVar753 == 0))))))
        goto LAB_0535dca8;
        uStack_5e4 = *(undefined4 *)(lVar718 + 0x28);
        uStack_5d8 = *(ulong *)(lVar778 + 0x10);
        local_5d0 = *(undefined8 *)(lVar778 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
        local_5a0 = *(undefined8 *)(lVar751 + 0x18);
        local_598 = *(ulong *)(lVar752 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
        local_578 = *(undefined8 *)(lVar760 + 0x10);
        local_570 = *(undefined8 *)(lVar760 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
        local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
        local_580 = *(undefined8 *)(lVar757 + 0x18);
        uStack_568 = *(undefined8 *)(lVar764 + 0x10);
        local_560 = *(undefined8 *)(lVar764 + 0x18);
        local_5c0 = *(undefined8 *)(lVar743 + 0x18);
        local_558 = *(undefined8 *)(lVar768 + 0x10);
        uStack_550 = *(undefined8 *)(lVar768 + 0x18);
        local_548 = *(undefined8 *)(lVar772 + 0x10);
        uStack_540 = *(undefined8 *)(lVar772 + 0x18);
        local_538 = *(undefined8 *)(lVar719 + 0x10);
        uStack_530 = *(undefined8 *)(lVar719 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
        local_528 = *(undefined8 *)(lVar788 + 0x10);
        uStack_520 = *(undefined8 *)(lVar788 + 0x18);
        local_518 = *(undefined8 *)(lVar790 + 0x10);
        uStack_510 = *(undefined8 *)(lVar790 + 0x18);
        local_508 = *(undefined8 *)(lVar791 + 0x10);
        uStack_500 = *(undefined8 *)(lVar791 + 0x18);
        local_4e8 = *(undefined8 *)(lVar753 + 0x10);
        uStack_4e0 = *(undefined8 *)(lVar753 + 0x18);
        local_5e0 = *puVar796;
        local_4f8 = *(undefined8 *)(lVar793 + 0x10);
        uStack_4f0 = *(undefined8 *)(lVar793 + 0x18);
        uStack_5ec = (undefined4)*(undefined8 *)(lVar718 + 0x38);
        uStack_5e8 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
        iStack_5f4 = (int)*(undefined8 *)(lVar718 + 0x30);
        iStack_5f0 = (int)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
        local_5f8 = iVar803;
        auVar807 = FUN_03abd168(&local_5f8,iVar10,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c38);
        auVar440._8_8_ = local_590._8_8_;
        auVar440._0_8_ = local_590._0_8_;
        auVar439._8_8_ = local_590._8_8_;
        auVar439._0_8_ = local_590._0_8_;
        auVar438._8_8_ = local_590._8_8_;
        auVar438._0_8_ = local_590._0_8_;
        auVar81._8_8_ = local_5b0._8_8_;
        auVar81._0_8_ = local_5b0._0_8_;
        auVar80._8_8_ = local_5b0._8_8_;
        auVar80._0_8_ = local_5b0._0_8_;
        auVar79._8_8_ = local_5b0._8_8_;
        auVar79._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if (((lVar778 == 0) ||
            (lVar743 = *(long *)(lVar713 + 0x48), local_5b0 = auVar79, local_590 = auVar438,
            lVar743 == 0)) ||
           ((lVar748 = *(long *)(lVar713 + 0x18), local_5b0 = auVar80, local_590 = auVar439,
            lVar748 == 0 ||
            (lVar751 = *(long *)(lVar713 + 0x40), local_5b0 = auVar81, local_590 = auVar440,
            lVar751 == 0)))) goto LAB_0535dca8;
        uVar738 = *(undefined8 *)(lVar718 + 0x38);
        uVar737 = *(undefined8 *)(lVar718 + 0x30);
        uVar805 = *(uint *)(lVar718 + 0x28);
        uVar755 = *puVar796;
        uVar806 = *(undefined8 *)(lVar743 + 0x10);
        uVar734 = *(undefined8 *)(lVar743 + 0x18);
        uVar720 = *(undefined8 *)(lVar748 + 0x10);
        uVar735 = *(undefined8 *)(lVar748 + 0x18);
        uVar729 = *(undefined8 *)(lVar751 + 0x10);
        uVar779 = *(ulong *)(lVar751 + 0x18);
        uVar733 = *(undefined8 *)(lVar778 + 0x10);
        uVar736 = *(undefined8 *)(lVar778 + 0x18);
        uVar710 = FUN_05369508(lVar716,0);
        auVar454._8_8_ = local_590._8_8_;
        auVar454._0_8_ = local_590._0_8_;
        auVar453._8_8_ = local_590._8_8_;
        auVar453._0_8_ = local_590._0_8_;
        auVar452._8_8_ = local_590._8_8_;
        auVar452._0_8_ = local_590._0_8_;
        auVar451._8_8_ = local_590._8_8_;
        auVar451._0_8_ = local_590._0_8_;
        auVar450._8_8_ = local_590._8_8_;
        auVar450._0_8_ = local_590._0_8_;
        auVar449._8_8_ = local_590._8_8_;
        auVar449._0_8_ = local_590._0_8_;
        auVar448._8_8_ = local_590._8_8_;
        auVar448._0_8_ = local_590._0_8_;
        auVar447._8_8_ = local_590._8_8_;
        auVar447._0_8_ = local_590._0_8_;
        auVar446._8_8_ = local_590._8_8_;
        auVar446._0_8_ = local_590._0_8_;
        auVar445._8_8_ = local_590._8_8_;
        auVar445._0_8_ = local_590._0_8_;
        auVar444._8_8_ = local_590._8_8_;
        auVar444._0_8_ = local_590._0_8_;
        auVar443._8_8_ = local_590._8_8_;
        auVar443._0_8_ = local_590._0_8_;
        auVar442._8_8_ = local_590._8_8_;
        auVar442._0_8_ = local_590._0_8_;
        auVar441._8_8_ = local_590._8_8_;
        auVar441._0_8_ = local_590._0_8_;
        auVar95._8_8_ = local_5b0._8_8_;
        auVar95._0_8_ = local_5b0._0_8_;
        auVar94._8_8_ = local_5b0._8_8_;
        auVar94._0_8_ = local_5b0._0_8_;
        auVar93._8_8_ = local_5b0._8_8_;
        auVar93._0_8_ = local_5b0._0_8_;
        auVar92._8_8_ = local_5b0._8_8_;
        auVar92._0_8_ = local_5b0._0_8_;
        auVar91._8_8_ = local_5b0._8_8_;
        auVar91._0_8_ = local_5b0._0_8_;
        auVar90._8_8_ = local_5b0._8_8_;
        auVar90._0_8_ = local_5b0._0_8_;
        auVar89._8_8_ = local_5b0._8_8_;
        auVar89._0_8_ = local_5b0._0_8_;
        auVar88._8_8_ = local_5b0._8_8_;
        auVar88._0_8_ = local_5b0._0_8_;
        auVar87._8_8_ = local_5b0._8_8_;
        auVar87._0_8_ = local_5b0._0_8_;
        auVar86._8_8_ = local_5b0._8_8_;
        auVar86._0_8_ = local_5b0._0_8_;
        auVar85._8_8_ = local_5b0._8_8_;
        auVar85._0_8_ = local_5b0._0_8_;
        auVar84._8_8_ = local_5b0._8_8_;
        auVar84._0_8_ = local_5b0._0_8_;
        auVar83._8_8_ = local_5b0._8_8_;
        auVar83._0_8_ = local_5b0._0_8_;
        auVar82._8_8_ = local_5b0._8_8_;
        auVar82._0_8_ = local_5b0._0_8_;
        lVar778 = *(long *)(lVar716 + 0x10);
        if ((((lVar778 == 0) ||
             (lVar743 = *(long *)(lVar715 + 0x18), local_5b0 = auVar82, local_590 = auVar441,
             lVar743 == 0)) ||
            ((lVar748 = *(long *)(lVar715 + 0x38), local_5b0 = auVar83, local_590 = auVar442,
             lVar748 == 0 ||
             (((lVar751 = *(long *)(lVar715 + 0x118), local_5b0 = auVar84, local_590 = auVar443,
               lVar751 == 0 ||
               (lVar752 = *(long *)(lVar715 + 0x120), local_5b0 = auVar85, local_590 = auVar444,
               lVar752 == 0)) ||
              (lVar757 = *(long *)(lVar715 + 0x40), local_5b0 = auVar86, local_590 = auVar445,
              lVar757 == 0)))))) ||
           (((((lVar760 = *(long *)(param_1 + 0x18), local_5b0 = auVar87, local_590 = auVar446,
               lVar760 == 0 ||
               (lVar764 = *(long *)(param_1 + 0x20), local_5b0 = auVar88, local_590 = auVar447,
               lVar764 == 0)) ||
              ((lVar768 = *(long *)(param_1 + 0x30), local_5b0 = auVar89, local_590 = auVar448,
               lVar768 == 0 ||
               ((lVar772 = *(long *)(param_1 + 0x38), local_5b0 = auVar90, local_590 = auVar449,
                lVar772 == 0 ||
                (lVar719 = *(long *)(param_1 + 0x40), local_5b0 = auVar91, local_590 = auVar450,
                lVar719 == 0)))))) ||
             (lVar788 = *(long *)(param_1 + 0x48), local_5b0 = auVar92, local_590 = auVar451,
             lVar788 == 0)) ||
            (((lVar790 = *(long *)(param_1 + 0x50), local_5b0 = auVar93, local_590 = auVar452,
              lVar790 == 0 ||
              (lVar791 = *(long *)(param_1 + 0x60), local_5b0 = auVar94, local_590 = auVar453,
              lVar791 == 0)) ||
             (lVar793 = *(long *)(param_1 + 0x70), local_5b0 = auVar95, local_590 = auVar454,
             lVar793 == 0)))))) goto LAB_0535dca8;
        local_590._8_8_ = *(undefined8 *)(lVar778 + 0x10);
        local_580 = *(undefined8 *)(lVar778 + 0x18);
        local_4f8 = *(undefined8 *)(lVar772 + 0x10);
        uStack_4f0 = *(undefined8 *)(lVar772 + 0x18);
        local_578 = *(undefined8 *)(lVar743 + 0x10);
        local_4e8 = *(undefined8 *)(lVar719 + 0x10);
        uStack_4e0 = *(undefined8 *)(lVar719 + 0x18);
        local_570 = *(undefined8 *)(lVar743 + 0x18);
        local_508 = *(undefined8 *)(lVar768 + 0x10);
        uStack_500 = *(undefined8 *)(lVar768 + 0x18);
        local_4d8 = *(undefined8 *)(lVar788 + 0x10);
        uStack_4d0 = *(undefined8 *)(lVar788 + 0x18);
        local_4c8 = *(undefined8 *)(lVar790 + 0x10);
        uStack_4c0 = *(undefined8 *)(lVar790 + 0x18);
        uStack_568 = *(undefined8 *)(lVar748 + 0x10);
        local_4b8 = *(undefined8 *)(lVar791 + 0x10);
        uStack_4b0 = *(undefined8 *)(lVar791 + 0x18);
        local_560 = *(undefined8 *)(lVar748 + 0x18);
        local_518 = *(undefined8 *)(lVar764 + 0x10);
        uStack_510 = *(undefined8 *)(lVar764 + 0x18);
        local_558 = *(undefined8 *)(lVar751 + 0x10);
        uStack_550 = *(undefined8 *)(lVar751 + 0x18);
        local_528 = *(undefined8 *)(lVar760 + 0x10);
        uStack_520 = *(undefined8 *)(lVar760 + 0x18);
        local_548 = *(undefined8 *)(lVar752 + 0x10);
        uStack_540 = *(undefined8 *)(lVar752 + 0x18);
        local_538 = *(undefined8 *)(lVar757 + 0x10);
        uStack_530 = *(undefined8 *)(lVar757 + 0x18);
        local_4a8 = *(undefined8 *)(lVar793 + 0x10);
        uStack_4a0 = *(undefined8 *)(lVar793 + 0x18);
        uStack_5e8 = (undefined4)uVar738;
        uStack_5e4 = (undefined4)((ulong)uVar738 >> 0x20);
        iStack_5f0 = (int)uVar737;
        uStack_5ec = (undefined4)((ulong)uVar737 >> 0x20);
        local_5e0 = (ulong)uVar805;
        local_590._4_4_ = 0;
        local_590._0_4_ = uVar710;
        uStack_490 = *(undefined8 *)(param_1 + 0xd0);
        local_498 = *puVar4;
        uStack_480 = *(undefined8 *)(param_1 + 0xe0);
        local_488 = *puVar5;
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        uStack_5d8 = uVar755;
        local_5d0 = uVar733;
        uStack_5c8 = uVar736;
        local_5c0 = uVar806;
        uStack_5b8 = uVar734;
        local_5b0._0_8_ = uVar720;
        local_5b0._8_8_ = uVar735;
        local_5a0 = uVar729;
        local_598 = uVar779;
        auVar807 = FUN_03abd2a8(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c48);
        auVar464._8_8_ = local_590._8_8_;
        auVar464._0_8_ = local_590._0_8_;
        auVar463._8_8_ = local_590._8_8_;
        auVar463._0_8_ = local_590._0_8_;
        auVar462._8_8_ = local_590._8_8_;
        auVar462._0_8_ = local_590._0_8_;
        auVar461._8_8_ = local_590._8_8_;
        auVar461._0_8_ = local_590._0_8_;
        auVar460._8_8_ = local_590._8_8_;
        auVar460._0_8_ = local_590._0_8_;
        auVar459._8_8_ = local_590._8_8_;
        auVar459._0_8_ = local_590._0_8_;
        auVar458._8_8_ = local_590._8_8_;
        auVar458._0_8_ = local_590._0_8_;
        auVar457._8_8_ = local_590._8_8_;
        auVar457._0_8_ = local_590._0_8_;
        auVar456._8_8_ = local_590._8_8_;
        auVar456._0_8_ = local_590._0_8_;
        auVar455._8_8_ = local_590._8_8_;
        auVar455._0_8_ = local_590._0_8_;
        auVar105._8_8_ = local_5b0._8_8_;
        auVar105._0_8_ = local_5b0._0_8_;
        auVar104._8_8_ = local_5b0._8_8_;
        auVar104._0_8_ = local_5b0._0_8_;
        auVar103._8_8_ = local_5b0._8_8_;
        auVar103._0_8_ = local_5b0._0_8_;
        auVar102._8_8_ = local_5b0._8_8_;
        auVar102._0_8_ = local_5b0._0_8_;
        auVar101._8_8_ = local_5b0._8_8_;
        auVar101._0_8_ = local_5b0._0_8_;
        auVar100._8_8_ = local_5b0._8_8_;
        auVar100._0_8_ = local_5b0._0_8_;
        auVar99._8_8_ = local_5b0._8_8_;
        auVar99._0_8_ = local_5b0._0_8_;
        auVar98._8_8_ = local_5b0._8_8_;
        auVar98._0_8_ = local_5b0._0_8_;
        auVar97._8_8_ = local_5b0._8_8_;
        auVar97._0_8_ = local_5b0._0_8_;
        auVar96._8_8_ = local_5b0._8_8_;
        auVar96._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if (((lVar778 == 0) ||
            (lVar743 = *(long *)(lVar715 + 0x18), local_5b0 = auVar96, local_590 = auVar455,
            lVar743 == 0)) ||
           ((((lVar748 = *(long *)(lVar715 + 0x40), local_5b0 = auVar97, local_590 = auVar456,
              lVar748 == 0 ||
              ((lVar751 = *(long *)(lVar715 + 0x58), local_5b0 = auVar98, local_590 = auVar457,
               lVar751 == 0 ||
               (lVar752 = *(long *)(lVar715 + 200), local_5b0 = auVar99, local_590 = auVar458,
               lVar752 == 0)))) ||
             (lVar757 = *(long *)(lVar715 + 0xd0), local_5b0 = auVar100, local_590 = auVar459,
             lVar757 == 0)) ||
            ((((lVar760 = *(long *)(lVar715 + 0xd8), local_5b0 = auVar101, local_590 = auVar460,
               lVar760 == 0 ||
               (lVar764 = *(long *)(lVar715 + 0x48), local_5b0 = auVar102, local_590 = auVar461,
               lVar764 == 0)) ||
              (lVar768 = *(long *)(lVar715 + 0x50), local_5b0 = auVar103, local_590 = auVar462,
              lVar768 == 0)) ||
             ((lVar772 = *(long *)(param_1 + 0x30), local_5b0 = auVar104, local_590 = auVar463,
              lVar772 == 0 ||
              (lVar719 = *(long *)(param_1 + 0x38), local_5b0 = auVar105, local_590 = auVar464,
              lVar719 == 0)))))))) goto LAB_0535dca8;
        local_5e0 = *(ulong *)(lVar778 + 0x18);
        uStack_5d8 = *(ulong *)(lVar743 + 0x10);
        local_5d0 = *(undefined8 *)(lVar743 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
        local_5c0 = *(undefined8 *)(lVar748 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
        local_5a0 = *(undefined8 *)(lVar752 + 0x18);
        local_598 = *(ulong *)(lVar757 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
        local_590._8_8_ = *(undefined8 *)(lVar760 + 0x10);
        local_580 = *(undefined8 *)(lVar760 + 0x18);
        local_578 = *(undefined8 *)(lVar764 + 0x10);
        local_570 = *(undefined8 *)(lVar764 + 0x18);
        uStack_568 = *(undefined8 *)(lVar768 + 0x10);
        local_560 = *(undefined8 *)(lVar768 + 0x18);
        local_558 = *(undefined8 *)(lVar772 + 0x10);
        uStack_550 = *(undefined8 *)(lVar772 + 0x18);
        local_548 = *(undefined8 *)(lVar719 + 0x10);
        uStack_540 = *(undefined8 *)(lVar719 + 0x18);
        iStack_5f0 = (int)*puVar796;
        uStack_5ec = (undefined4)(*puVar796 >> 0x20);
        uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
        uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
        uStack_530 = *(undefined8 *)(param_1 + 0xd0);
        local_538 = *puVar4;
        uStack_520 = *(undefined8 *)(param_1 + 0xe0);
        local_528 = *puVar5;
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        auVar807 = FUN_03abd348(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c50);
        auVar477._8_8_ = local_590._8_8_;
        auVar477._0_8_ = local_590._0_8_;
        auVar476._8_8_ = local_590._8_8_;
        auVar476._0_8_ = local_590._0_8_;
        auVar475._8_8_ = local_590._8_8_;
        auVar475._0_8_ = local_590._0_8_;
        auVar474._8_8_ = local_590._8_8_;
        auVar474._0_8_ = local_590._0_8_;
        auVar473._8_8_ = local_590._8_8_;
        auVar473._0_8_ = local_590._0_8_;
        auVar472._8_8_ = local_590._8_8_;
        auVar472._0_8_ = local_590._0_8_;
        auVar471._8_8_ = local_590._8_8_;
        auVar471._0_8_ = local_590._0_8_;
        auVar470._8_8_ = local_590._8_8_;
        auVar470._0_8_ = local_590._0_8_;
        auVar469._8_8_ = local_590._8_8_;
        auVar469._0_8_ = local_590._0_8_;
        auVar468._8_8_ = local_590._8_8_;
        auVar468._0_8_ = local_590._0_8_;
        auVar467._8_8_ = local_590._8_8_;
        auVar467._0_8_ = local_590._0_8_;
        auVar466._8_8_ = local_590._8_8_;
        auVar466._0_8_ = local_590._0_8_;
        auVar465._8_8_ = local_590._8_8_;
        auVar465._0_8_ = local_590._0_8_;
        auVar118._8_8_ = local_5b0._8_8_;
        auVar118._0_8_ = local_5b0._0_8_;
        auVar117._8_8_ = local_5b0._8_8_;
        auVar117._0_8_ = local_5b0._0_8_;
        auVar116._8_8_ = local_5b0._8_8_;
        auVar116._0_8_ = local_5b0._0_8_;
        auVar115._8_8_ = local_5b0._8_8_;
        auVar115._0_8_ = local_5b0._0_8_;
        auVar114._8_8_ = local_5b0._8_8_;
        auVar114._0_8_ = local_5b0._0_8_;
        auVar113._8_8_ = local_5b0._8_8_;
        auVar113._0_8_ = local_5b0._0_8_;
        auVar112._8_8_ = local_5b0._8_8_;
        auVar112._0_8_ = local_5b0._0_8_;
        auVar111._8_8_ = local_5b0._8_8_;
        auVar111._0_8_ = local_5b0._0_8_;
        auVar110._8_8_ = local_5b0._8_8_;
        auVar110._0_8_ = local_5b0._0_8_;
        auVar109._8_8_ = local_5b0._8_8_;
        auVar109._0_8_ = local_5b0._0_8_;
        auVar108._8_8_ = local_5b0._8_8_;
        auVar108._0_8_ = local_5b0._0_8_;
        auVar107._8_8_ = local_5b0._8_8_;
        auVar107._0_8_ = local_5b0._0_8_;
        auVar106._8_8_ = local_5b0._8_8_;
        auVar106._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if ((((lVar778 == 0) ||
             ((lVar743 = *(long *)(lVar713 + 0x48), local_5b0 = auVar106, local_590 = auVar465,
              lVar743 == 0 ||
              (lVar748 = *(long *)(lVar713 + 0x40), local_5b0 = auVar107, local_590 = auVar466,
              lVar748 == 0)))) ||
            ((lVar751 = *(long *)(lVar715 + 0x18), local_5b0 = auVar108, local_590 = auVar467,
             lVar751 == 0 ||
             ((((lVar752 = *(long *)(lVar715 + 0x38), local_5b0 = auVar109, local_590 = auVar468,
                lVar752 == 0 ||
                (lVar757 = *(long *)(lVar715 + 0x40), local_5b0 = auVar110, local_590 = auVar469,
                lVar757 == 0)) ||
               (lVar760 = *(long *)(param_1 + 0x18), local_5b0 = auVar111, local_590 = auVar470,
               lVar760 == 0)) ||
              (((lVar764 = *(long *)(param_1 + 0x30), local_5b0 = auVar112, local_590 = auVar471,
                lVar764 == 0 ||
                (lVar768 = *(long *)(param_1 + 0x50), local_5b0 = auVar113, local_590 = auVar472,
                lVar768 == 0)) ||
               ((lVar772 = *(long *)(param_1 + 0x70), local_5b0 = auVar114, local_590 = auVar473,
                lVar772 == 0 ||
                ((lVar719 = *(long *)(param_1 + 0x88), local_5b0 = auVar115, local_590 = auVar474,
                 lVar719 == 0 ||
                 (lVar788 = *(long *)(lVar719 + 0x10), local_5b0 = auVar116, local_590 = auVar475,
                 lVar788 == 0)))))))))))) ||
           ((lVar790 = *(long *)(lVar719 + 0x18), local_5b0 = auVar117, local_590 = auVar476,
            lVar790 == 0 ||
            (lVar719 = *(long *)(lVar719 + 0x20), local_5b0 = auVar118, local_590 = auVar477,
            lVar719 == 0)))) goto LAB_0535dca8;
        local_5e0 = *puVar796;
        uStack_5d8 = *(ulong *)(lVar778 + 0x10);
        local_5d0 = *(undefined8 *)(lVar778 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
        local_5c0 = *(undefined8 *)(lVar743 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
        local_5a0 = *(undefined8 *)(lVar751 + 0x18);
        local_598 = *(ulong *)(lVar752 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
        local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
        local_580 = *(undefined8 *)(lVar757 + 0x18);
        local_578 = *(undefined8 *)(lVar760 + 0x10);
        local_570 = *(undefined8 *)(lVar760 + 0x18);
        uStack_568 = *(undefined8 *)(lVar764 + 0x10);
        local_560 = *(undefined8 *)(lVar764 + 0x18);
        local_558 = *(undefined8 *)(lVar768 + 0x10);
        uStack_550 = *(undefined8 *)(lVar768 + 0x18);
        local_548 = *(undefined8 *)(lVar772 + 0x10);
        uStack_540 = *(undefined8 *)(lVar772 + 0x18);
        local_538 = *(undefined8 *)(lVar788 + 0x10);
        uStack_530 = *(undefined8 *)(lVar788 + 0x18);
        local_528 = *(undefined8 *)(lVar790 + 0x10);
        uStack_520 = *(undefined8 *)(lVar790 + 0x18);
        local_518 = *(undefined8 *)(lVar719 + 0x10);
        uStack_510 = *(undefined8 *)(lVar719 + 0x18);
        uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
        uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
        iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
        uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
        uStack_500 = *(undefined8 *)(param_1 + 0xd0);
        local_508 = *puVar4;
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<XRRaycast>
                             (&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                              *(undefined8 *)PTR_DAT_06d40c58);
        auVar492._8_8_ = local_590._8_8_;
        auVar492._0_8_ = local_590._0_8_;
        auVar491._8_8_ = local_590._8_8_;
        auVar491._0_8_ = local_590._0_8_;
        auVar490._8_8_ = local_590._8_8_;
        auVar490._0_8_ = local_590._0_8_;
        auVar489._8_8_ = local_590._8_8_;
        auVar489._0_8_ = local_590._0_8_;
        auVar488._8_8_ = local_590._8_8_;
        auVar488._0_8_ = local_590._0_8_;
        auVar487._8_8_ = local_590._8_8_;
        auVar487._0_8_ = local_590._0_8_;
        auVar486._8_8_ = local_590._8_8_;
        auVar486._0_8_ = local_590._0_8_;
        auVar485._8_8_ = local_590._8_8_;
        auVar485._0_8_ = local_590._0_8_;
        auVar484._8_8_ = local_590._8_8_;
        auVar484._0_8_ = local_590._0_8_;
        auVar483._8_8_ = local_590._8_8_;
        auVar483._0_8_ = local_590._0_8_;
        auVar482._8_8_ = local_590._8_8_;
        auVar482._0_8_ = local_590._0_8_;
        auVar481._8_8_ = local_590._8_8_;
        auVar481._0_8_ = local_590._0_8_;
        auVar480._8_8_ = local_590._8_8_;
        auVar480._0_8_ = local_590._0_8_;
        auVar479._8_8_ = local_590._8_8_;
        auVar479._0_8_ = local_590._0_8_;
        auVar478._8_8_ = local_590._8_8_;
        auVar478._0_8_ = local_590._0_8_;
        auVar133._8_8_ = local_5b0._8_8_;
        auVar133._0_8_ = local_5b0._0_8_;
        auVar132._8_8_ = local_5b0._8_8_;
        auVar132._0_8_ = local_5b0._0_8_;
        auVar131._8_8_ = local_5b0._8_8_;
        auVar131._0_8_ = local_5b0._0_8_;
        auVar130._8_8_ = local_5b0._8_8_;
        auVar130._0_8_ = local_5b0._0_8_;
        auVar129._8_8_ = local_5b0._8_8_;
        auVar129._0_8_ = local_5b0._0_8_;
        auVar128._8_8_ = local_5b0._8_8_;
        auVar128._0_8_ = local_5b0._0_8_;
        auVar127._8_8_ = local_5b0._8_8_;
        auVar127._0_8_ = local_5b0._0_8_;
        auVar126._8_8_ = local_5b0._8_8_;
        auVar126._0_8_ = local_5b0._0_8_;
        auVar125._8_8_ = local_5b0._8_8_;
        auVar125._0_8_ = local_5b0._0_8_;
        auVar124._8_8_ = local_5b0._8_8_;
        auVar124._0_8_ = local_5b0._0_8_;
        auVar123._8_8_ = local_5b0._8_8_;
        auVar123._0_8_ = local_5b0._0_8_;
        auVar122._8_8_ = local_5b0._8_8_;
        auVar122._0_8_ = local_5b0._0_8_;
        auVar121._8_8_ = local_5b0._8_8_;
        auVar121._0_8_ = local_5b0._0_8_;
        auVar120._8_8_ = local_5b0._8_8_;
        auVar120._0_8_ = local_5b0._0_8_;
        auVar119._8_8_ = local_5b0._8_8_;
        auVar119._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if (((((lVar778 == 0) ||
              (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar119, local_590 = auVar478,
              lVar743 == 0)) ||
             (lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar120, local_590 = auVar479,
             lVar748 == 0)) ||
            (((lVar751 = *(long *)(lVar715 + 0x38), local_5b0 = auVar121, local_590 = auVar480,
              lVar751 == 0 ||
              (lVar752 = *(long *)(lVar715 + 0x40), local_5b0 = auVar122, local_590 = auVar481,
              lVar752 == 0)) ||
             ((lVar757 = *(long *)(lVar715 + 0x58), local_5b0 = auVar123, local_590 = auVar482,
              lVar757 == 0 ||
              ((lVar760 = *(long *)(lVar715 + 200), local_5b0 = auVar124, local_590 = auVar483,
               lVar760 == 0 ||
               (lVar764 = *(long *)(lVar715 + 0xd0), local_5b0 = auVar125, local_590 = auVar484,
               lVar764 == 0)))))))) ||
           ((lVar768 = *(long *)(lVar715 + 0xd8), local_5b0 = auVar126, local_590 = auVar485,
            lVar768 == 0 ||
            (((((lVar772 = *(long *)(param_1 + 0x18), local_5b0 = auVar127, local_590 = auVar486,
                lVar772 == 0 ||
                (lVar719 = *(long *)(param_1 + 0x50), local_5b0 = auVar128, local_590 = auVar487,
                lVar719 == 0)) ||
               (lVar788 = *(long *)(param_1 + 0x70), local_5b0 = auVar129, local_590 = auVar488,
               lVar788 == 0)) ||
              ((lVar790 = *(long *)(param_1 + 0x88), local_5b0 = auVar130, local_590 = auVar489,
               lVar790 == 0 ||
               (lVar791 = *(long *)(lVar790 + 0x10), local_5b0 = auVar131, local_590 = auVar490,
               lVar791 == 0)))) ||
             ((lVar793 = *(long *)(lVar790 + 0x18), local_5b0 = auVar132, local_590 = auVar491,
              lVar793 == 0 ||
              (lVar790 = *(long *)(lVar790 + 0x20), local_5b0 = auVar133, local_590 = auVar492,
              lVar790 == 0)))))))) goto LAB_0535dca8;
        uStack_5d8 = *(ulong *)(lVar778 + 0x10);
        local_5d0 = *(undefined8 *)(lVar778 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
        local_5a0 = *(undefined8 *)(lVar751 + 0x18);
        local_598 = *(ulong *)(lVar752 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
        local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
        local_580 = *(undefined8 *)(lVar757 + 0x18);
        local_578 = *(undefined8 *)(lVar760 + 0x10);
        local_570 = *(undefined8 *)(lVar760 + 0x18);
        local_5c0 = *(undefined8 *)(lVar743 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
        uStack_568 = *(undefined8 *)(lVar764 + 0x10);
        local_560 = *(undefined8 *)(lVar764 + 0x18);
        local_558 = *(undefined8 *)(lVar768 + 0x10);
        uStack_550 = *(undefined8 *)(lVar768 + 0x18);
        local_548 = *(undefined8 *)(lVar772 + 0x10);
        uStack_540 = *(undefined8 *)(lVar772 + 0x18);
        local_538 = *(undefined8 *)(lVar719 + 0x10);
        uStack_530 = *(undefined8 *)(lVar719 + 0x18);
        local_528 = *(undefined8 *)(lVar788 + 0x10);
        uStack_520 = *(undefined8 *)(lVar788 + 0x18);
        local_518 = *(undefined8 *)(lVar791 + 0x10);
        uStack_510 = *(undefined8 *)(lVar791 + 0x18);
        local_508 = *(undefined8 *)(lVar793 + 0x10);
        uStack_500 = *(undefined8 *)(lVar793 + 0x18);
        local_4f8 = *(undefined8 *)(lVar790 + 0x10);
        uStack_4f0 = *(undefined8 *)(lVar790 + 0x18);
        local_5e0 = *puVar796;
        uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
        uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
        iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
        uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
        uStack_4e0 = *(undefined8 *)(param_1 + 0xd0);
        local_4e8 = *puVar4;
        uStack_4d0 = *(undefined8 *)(param_1 + 0xe0);
        local_4d8 = *puVar5;
        uStack_4c0 = *(undefined8 *)(param_1 + 0xf0);
        local_4c8 = *puVar6;
        uStack_4b0 = *(undefined8 *)(param_1 + 0x100);
        local_4b8 = *puVar7;
        uStack_4a0 = *(undefined8 *)(param_1 + 0x120);
        local_4a8 = *puVar8;
        uStack_490 = *(undefined8 *)(param_1 + 0x130);
        local_498 = *(undefined8 *)(param_1 + 0x128);
        uStack_480 = *(undefined8 *)(param_1 + 0x140);
        local_488 = *(undefined8 *)(param_1 + 0x138);
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        auVar807 = FUN_03abd208(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c40);
        auVar501._8_8_ = local_590._8_8_;
        auVar501._0_8_ = local_590._0_8_;
        auVar500._8_8_ = local_590._8_8_;
        auVar500._0_8_ = local_590._0_8_;
        auVar499._8_8_ = local_590._8_8_;
        auVar499._0_8_ = local_590._0_8_;
        auVar498._8_8_ = local_590._8_8_;
        auVar498._0_8_ = local_590._0_8_;
        auVar497._8_8_ = local_590._8_8_;
        auVar497._0_8_ = local_590._0_8_;
        auVar496._8_8_ = local_590._8_8_;
        auVar496._0_8_ = local_590._0_8_;
        auVar495._8_8_ = local_590._8_8_;
        auVar495._0_8_ = local_590._0_8_;
        auVar494._8_8_ = local_590._8_8_;
        auVar494._0_8_ = local_590._0_8_;
        auVar493._8_8_ = local_590._8_8_;
        auVar493._0_8_ = local_590._0_8_;
        auVar142._8_8_ = local_5b0._8_8_;
        auVar142._0_8_ = local_5b0._0_8_;
        auVar141._8_8_ = local_5b0._8_8_;
        auVar141._0_8_ = local_5b0._0_8_;
        auVar140._8_8_ = local_5b0._8_8_;
        auVar140._0_8_ = local_5b0._0_8_;
        auVar139._8_8_ = local_5b0._8_8_;
        auVar139._0_8_ = local_5b0._0_8_;
        auVar138._8_8_ = local_5b0._8_8_;
        auVar138._0_8_ = local_5b0._0_8_;
        auVar137._8_8_ = local_5b0._8_8_;
        auVar137._0_8_ = local_5b0._0_8_;
        auVar136._8_8_ = local_5b0._8_8_;
        auVar136._0_8_ = local_5b0._0_8_;
        auVar135._8_8_ = local_5b0._8_8_;
        auVar135._0_8_ = local_5b0._0_8_;
        auVar134._8_8_ = local_5b0._8_8_;
        auVar134._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if ((((lVar778 == 0) ||
             (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar134, local_590 = auVar493,
             lVar743 == 0)) ||
            (lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar135, local_590 = auVar494,
            lVar748 == 0)) ||
           (((((lVar751 = *(long *)(lVar715 + 0x38), local_5b0 = auVar136, local_590 = auVar495,
               lVar751 == 0 ||
               (lVar752 = *(long *)(param_1 + 0x18), local_5b0 = auVar137, local_590 = auVar496,
               lVar752 == 0)) ||
              (lVar757 = *(long *)(param_1 + 0x70), local_5b0 = auVar138, local_590 = auVar497,
              lVar757 == 0)) ||
             ((lVar760 = *(long *)(param_1 + 0x90), local_5b0 = auVar139, local_590 = auVar498,
              lVar760 == 0 ||
              (lVar764 = *(long *)(lVar760 + 0x10), local_5b0 = auVar140, local_590 = auVar499,
              lVar764 == 0)))) ||
            ((lVar768 = *(long *)(lVar760 + 0x18), local_5b0 = auVar141, local_590 = auVar500,
             lVar768 == 0 ||
             (lVar760 = *(long *)(lVar760 + 0x20), local_5b0 = auVar142, local_590 = auVar501,
             lVar760 == 0)))))) goto LAB_0535dca8;
        local_5e0 = *puVar796;
        uStack_5d8 = *(ulong *)(lVar778 + 0x10);
        local_5d0 = *(undefined8 *)(lVar778 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
        local_5c0 = *(undefined8 *)(lVar743 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
        local_5a0 = *(undefined8 *)(lVar751 + 0x18);
        local_598 = *(ulong *)(lVar752 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
        local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
        local_580 = *(undefined8 *)(lVar757 + 0x18);
        local_578 = *(undefined8 *)(lVar764 + 0x10);
        local_570 = *(undefined8 *)(lVar764 + 0x18);
        uStack_568 = *(undefined8 *)(lVar768 + 0x10);
        local_560 = *(undefined8 *)(lVar768 + 0x18);
        local_558 = *(undefined8 *)(lVar760 + 0x10);
        uStack_550 = *(undefined8 *)(lVar760 + 0x18);
        uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
        uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
        iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
        uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
        uStack_540 = *(undefined8 *)(param_1 + 0xf0);
        local_548 = *puVar6;
        uStack_530 = *(undefined8 *)(param_1 + 0x110);
        local_538 = *puVar9;
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        auVar807 = FUN_03abd7a8(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c88);
        auVar511._8_8_ = local_590._8_8_;
        auVar511._0_8_ = local_590._0_8_;
        auVar510._8_8_ = local_590._8_8_;
        auVar510._0_8_ = local_590._0_8_;
        auVar509._8_8_ = local_590._8_8_;
        auVar509._0_8_ = local_590._0_8_;
        auVar508._8_8_ = local_590._8_8_;
        auVar508._0_8_ = local_590._0_8_;
        auVar507._8_8_ = local_590._8_8_;
        auVar507._0_8_ = local_590._0_8_;
        auVar506._8_8_ = local_590._8_8_;
        auVar506._0_8_ = local_590._0_8_;
        auVar505._8_8_ = local_590._8_8_;
        auVar505._0_8_ = local_590._0_8_;
        auVar504._8_8_ = local_590._8_8_;
        auVar504._0_8_ = local_590._0_8_;
        auVar503._8_8_ = local_590._8_8_;
        auVar503._0_8_ = local_590._0_8_;
        auVar502._8_8_ = local_590._8_8_;
        auVar502._0_8_ = local_590._0_8_;
        auVar152._8_8_ = local_5b0._8_8_;
        auVar152._0_8_ = local_5b0._0_8_;
        auVar151._8_8_ = local_5b0._8_8_;
        auVar151._0_8_ = local_5b0._0_8_;
        auVar150._8_8_ = local_5b0._8_8_;
        auVar150._0_8_ = local_5b0._0_8_;
        auVar149._8_8_ = local_5b0._8_8_;
        auVar149._0_8_ = local_5b0._0_8_;
        auVar148._8_8_ = local_5b0._8_8_;
        auVar148._0_8_ = local_5b0._0_8_;
        auVar147._8_8_ = local_5b0._8_8_;
        auVar147._0_8_ = local_5b0._0_8_;
        auVar146._8_8_ = local_5b0._8_8_;
        auVar146._0_8_ = local_5b0._0_8_;
        auVar145._8_8_ = local_5b0._8_8_;
        auVar145._0_8_ = local_5b0._0_8_;
        auVar144._8_8_ = local_5b0._8_8_;
        auVar144._0_8_ = local_5b0._0_8_;
        auVar143._8_8_ = local_5b0._8_8_;
        auVar143._0_8_ = local_5b0._0_8_;
        lVar778 = *plVar742;
        if (((lVar778 == 0) ||
            (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar143, local_590 = auVar502,
            lVar743 == 0)) ||
           (((lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar144, local_590 = auVar503,
             lVar748 == 0 ||
             (((lVar751 = *(long *)(lVar715 + 0x38), local_5b0 = auVar145, local_590 = auVar504,
               lVar751 == 0 ||
               (lVar752 = *(long *)(param_1 + 0x18), local_5b0 = auVar146, local_590 = auVar505,
               lVar752 == 0)) ||
              (lVar757 = *(long *)(param_1 + 0x30), local_5b0 = auVar147, local_590 = auVar506,
              lVar757 == 0)))) ||
            (((lVar760 = *(long *)(param_1 + 0x50), local_5b0 = auVar148, local_590 = auVar507,
              lVar760 == 0 ||
              (lVar764 = *(long *)(param_1 + 0x70), local_5b0 = auVar149, local_590 = auVar508,
              lVar764 == 0)) ||
             ((lVar768 = *(long *)(param_1 + 0x80), local_5b0 = auVar150, local_590 = auVar509,
              lVar768 == 0 ||
              ((lVar772 = *(long *)(lVar717 + 0x18), local_5b0 = auVar151, local_590 = auVar510,
               lVar772 == 0 ||
               (lVar719 = *(long *)(lVar717 + 0x90), local_5b0 = auVar152, local_590 = auVar511,
               lVar719 == 0)))))))))) goto LAB_0535dca8;
        local_5e0 = *puVar796;
        uStack_5d8 = *(ulong *)(lVar778 + 0x10);
        local_5d0 = *(undefined8 *)(lVar778 + 0x18);
        uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
        local_5c0 = *(undefined8 *)(lVar743 + 0x18);
        uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
        local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
        local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
        local_5a0 = *(undefined8 *)(lVar751 + 0x18);
        local_598 = *(ulong *)(lVar752 + 0x10);
        local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
        local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
        local_580 = *(undefined8 *)(lVar757 + 0x18);
        local_578 = *(undefined8 *)(lVar760 + 0x10);
        local_570 = *(undefined8 *)(lVar760 + 0x18);
        uStack_568 = *(undefined8 *)(lVar764 + 0x10);
        local_560 = *(undefined8 *)(lVar764 + 0x18);
        local_558 = *(undefined8 *)(lVar768 + 0x10);
        uStack_550 = *(undefined8 *)(lVar768 + 0x18);
        local_548 = *(undefined8 *)(lVar772 + 0x10);
        uStack_540 = *(undefined8 *)(lVar772 + 0x18);
        local_538 = *(undefined8 *)(lVar719 + 0x10);
        uStack_530 = *(undefined8 *)(lVar719 + 0x18);
        uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
        uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
        iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
        uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
        uStack_520 = *(undefined8 *)(param_1 + 0xf0);
        local_528 = *puVar6;
        uStack_510 = *(undefined8 *)(param_1 + 0x110);
        local_518 = *puVar9;
        local_5f8 = iVar709;
        iStack_5f4 = iVar803;
        auVar807 = FUN_03abd488(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c60);
        auVar518._8_8_ = local_590._8_8_;
        auVar518._0_8_ = local_590._0_8_;
        auVar517._8_8_ = local_590._8_8_;
        auVar517._0_8_ = local_590._0_8_;
        auVar516._8_8_ = local_590._8_8_;
        auVar516._0_8_ = local_590._0_8_;
        auVar515._8_8_ = local_590._8_8_;
        auVar515._0_8_ = local_590._0_8_;
        auVar514._8_8_ = local_590._8_8_;
        auVar514._0_8_ = local_590._0_8_;
        auVar513._8_8_ = local_590._8_8_;
        auVar513._0_8_ = local_590._0_8_;
        auVar512._8_8_ = local_590._8_8_;
        auVar512._0_8_ = local_590._0_8_;
        auVar159._8_8_ = local_5b0._8_8_;
        auVar159._0_8_ = local_5b0._0_8_;
        auVar158._8_8_ = local_5b0._8_8_;
        auVar158._0_8_ = local_5b0._0_8_;
        auVar157._8_8_ = local_5b0._8_8_;
        auVar157._0_8_ = local_5b0._0_8_;
        auVar156._8_8_ = local_5b0._8_8_;
        auVar156._0_8_ = local_5b0._0_8_;
        auVar155._8_8_ = local_5b0._8_8_;
        auVar155._0_8_ = local_5b0._0_8_;
        auVar154._8_8_ = local_5b0._8_8_;
        auVar154._0_8_ = local_5b0._0_8_;
        auVar153._8_8_ = local_5b0._8_8_;
        auVar153._0_8_ = local_5b0._0_8_;
        if (0 < extraout_w1) {
          lVar778 = *plVar742;
          if ((((((lVar778 == 0) ||
                 (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar153, local_590 = auVar512,
                 lVar743 == 0)) ||
                (lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar154, local_590 = auVar513,
                lVar748 == 0)) ||
               ((lVar751 = *(long *)(lVar715 + 0x38), local_5b0 = auVar155, local_590 = auVar514,
                lVar751 == 0 ||
                (lVar752 = *(long *)(lVar715 + 0xa8), local_5b0 = auVar156, local_590 = auVar515,
                lVar752 == 0)))) ||
              (lVar757 = *(long *)(param_1 + 0x18), local_5b0 = auVar157, local_590 = auVar516,
              lVar757 == 0)) ||
             ((lVar760 = *(long *)(lVar717 + 0x18), local_5b0 = auVar158, local_590 = auVar517,
              lVar760 == 0 ||
              (lVar764 = *(long *)(lVar717 + 0x90), local_5b0 = auVar159, local_590 = auVar518,
              lVar764 == 0)))) goto LAB_0535dca8;
          local_5e0 = *puVar796;
          uStack_5d8 = *(ulong *)(lVar778 + 0x10);
          local_5d0 = *(undefined8 *)(lVar778 + 0x18);
          uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
          local_5c0 = *(undefined8 *)(lVar743 + 0x18);
          uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
          local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
          local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
          local_5a0 = *(undefined8 *)(lVar751 + 0x18);
          local_598 = *(ulong *)(lVar752 + 0x10);
          local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
          local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
          local_580 = *(undefined8 *)(lVar757 + 0x18);
          local_578 = *(undefined8 *)(lVar760 + 0x10);
          local_570 = *(undefined8 *)(lVar760 + 0x18);
          uStack_568 = *(undefined8 *)(lVar764 + 0x10);
          local_560 = *(undefined8 *)(lVar764 + 0x18);
          uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
          uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
          iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
          uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
          uStack_550 = *(undefined8 *)(param_1 + 0xf0);
          local_558 = *puVar6;
          uStack_540 = *(undefined8 *)(param_1 + 0x100);
          local_548 = *puVar7;
          uStack_530 = *(undefined8 *)(param_1 + 0x110);
          local_538 = *puVar9;
          uStack_520 = *(undefined8 *)(param_1 + 0x120);
          local_528 = *puVar8;
          local_5f8 = iVar709;
          iStack_5f4 = iVar803;
          auVar807 = FUN_03abd528(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40c68);
        }
        auVar705._8_8_ = local_590._8_8_;
        auVar705._0_8_ = local_590._0_8_;
        auVar704._8_8_ = local_590._8_8_;
        auVar704._0_8_ = local_590._0_8_;
        auVar703._8_8_ = local_590._8_8_;
        auVar703._0_8_ = local_590._0_8_;
        auVar702._8_8_ = local_590._8_8_;
        auVar702._0_8_ = local_590._0_8_;
        auVar701._8_8_ = local_590._8_8_;
        auVar701._0_8_ = local_590._0_8_;
        auVar700._8_8_ = local_590._8_8_;
        auVar700._0_8_ = local_590._0_8_;
        auVar699._8_8_ = local_590._8_8_;
        auVar699._0_8_ = local_590._0_8_;
        auVar698._8_8_ = local_590._8_8_;
        auVar698._0_8_ = local_590._0_8_;
        auVar697._8_8_ = local_590._8_8_;
        auVar697._0_8_ = local_590._0_8_;
        auVar696._8_8_ = local_590._8_8_;
        auVar696._0_8_ = local_590._0_8_;
        auVar695._8_8_ = local_590._8_8_;
        auVar695._0_8_ = local_590._0_8_;
        auVar694._8_8_ = local_590._8_8_;
        auVar694._0_8_ = local_590._0_8_;
        auVar693._8_8_ = local_590._8_8_;
        auVar693._0_8_ = local_590._0_8_;
        auVar692._8_8_ = local_590._8_8_;
        auVar692._0_8_ = local_590._0_8_;
        auVar691._8_8_ = local_590._8_8_;
        auVar691._0_8_ = local_590._0_8_;
        auVar690._8_8_ = local_590._8_8_;
        auVar690._0_8_ = local_590._0_8_;
        auVar689._8_8_ = local_590._8_8_;
        auVar689._0_8_ = local_590._0_8_;
        auVar688._8_8_ = local_590._8_8_;
        auVar688._0_8_ = local_590._0_8_;
        auVar687._8_8_ = local_590._8_8_;
        auVar687._0_8_ = local_590._0_8_;
        auVar686._8_8_ = local_590._8_8_;
        auVar686._0_8_ = local_590._0_8_;
        auVar685._8_8_ = local_590._8_8_;
        auVar685._0_8_ = local_590._0_8_;
        auVar684._8_8_ = local_590._8_8_;
        auVar684._0_8_ = local_590._0_8_;
        auVar532._8_8_ = local_590._8_8_;
        auVar532._0_8_ = local_590._0_8_;
        auVar531._8_8_ = local_590._8_8_;
        auVar531._0_8_ = local_590._0_8_;
        auVar530._8_8_ = local_590._8_8_;
        auVar530._0_8_ = local_590._0_8_;
        auVar529._8_8_ = local_590._8_8_;
        auVar529._0_8_ = local_590._0_8_;
        auVar528._8_8_ = local_590._8_8_;
        auVar528._0_8_ = local_590._0_8_;
        auVar527._8_8_ = local_590._8_8_;
        auVar527._0_8_ = local_590._0_8_;
        auVar526._8_8_ = local_590._8_8_;
        auVar526._0_8_ = local_590._0_8_;
        auVar525._8_8_ = local_590._8_8_;
        auVar525._0_8_ = local_590._0_8_;
        auVar524._8_8_ = local_590._8_8_;
        auVar524._0_8_ = local_590._0_8_;
        auVar523._8_8_ = local_590._8_8_;
        auVar523._0_8_ = local_590._0_8_;
        auVar522._8_8_ = local_590._8_8_;
        auVar522._0_8_ = local_590._0_8_;
        auVar521._8_8_ = local_590._8_8_;
        auVar521._0_8_ = local_590._0_8_;
        auVar520._8_8_ = local_590._8_8_;
        auVar520._0_8_ = local_590._0_8_;
        auVar519._8_8_ = local_590._8_8_;
        auVar519._0_8_ = local_590._0_8_;
        auVar355._8_8_ = local_5b0._8_8_;
        auVar355._0_8_ = local_5b0._0_8_;
        auVar354._8_8_ = local_5b0._8_8_;
        auVar354._0_8_ = local_5b0._0_8_;
        auVar353._8_8_ = local_5b0._8_8_;
        auVar353._0_8_ = local_5b0._0_8_;
        auVar352._8_8_ = local_5b0._8_8_;
        auVar352._0_8_ = local_5b0._0_8_;
        auVar351._8_8_ = local_5b0._8_8_;
        auVar351._0_8_ = local_5b0._0_8_;
        auVar350._8_8_ = local_5b0._8_8_;
        auVar350._0_8_ = local_5b0._0_8_;
        auVar349._8_8_ = local_5b0._8_8_;
        auVar349._0_8_ = local_5b0._0_8_;
        auVar348._8_8_ = local_5b0._8_8_;
        auVar348._0_8_ = local_5b0._0_8_;
        auVar347._8_8_ = local_5b0._8_8_;
        auVar347._0_8_ = local_5b0._0_8_;
        auVar346._8_8_ = local_5b0._8_8_;
        auVar346._0_8_ = local_5b0._0_8_;
        auVar345._8_8_ = local_5b0._8_8_;
        auVar345._0_8_ = local_5b0._0_8_;
        auVar344._8_8_ = local_5b0._8_8_;
        auVar344._0_8_ = local_5b0._0_8_;
        auVar343._8_8_ = local_5b0._8_8_;
        auVar343._0_8_ = local_5b0._0_8_;
        auVar342._8_8_ = local_5b0._8_8_;
        auVar342._0_8_ = local_5b0._0_8_;
        auVar341._8_8_ = local_5b0._8_8_;
        auVar341._0_8_ = local_5b0._0_8_;
        auVar340._8_8_ = local_5b0._8_8_;
        auVar340._0_8_ = local_5b0._0_8_;
        auVar339._8_8_ = local_5b0._8_8_;
        auVar339._0_8_ = local_5b0._0_8_;
        auVar338._8_8_ = local_5b0._8_8_;
        auVar338._0_8_ = local_5b0._0_8_;
        auVar337._8_8_ = local_5b0._8_8_;
        auVar337._0_8_ = local_5b0._0_8_;
        auVar336._8_8_ = local_5b0._8_8_;
        auVar336._0_8_ = local_5b0._0_8_;
        auVar335._8_8_ = local_5b0._8_8_;
        auVar335._0_8_ = local_5b0._0_8_;
        auVar334._8_8_ = local_5b0._8_8_;
        auVar334._0_8_ = local_5b0._0_8_;
        auVar173._8_8_ = local_5b0._8_8_;
        auVar173._0_8_ = local_5b0._0_8_;
        auVar172._8_8_ = local_5b0._8_8_;
        auVar172._0_8_ = local_5b0._0_8_;
        auVar171._8_8_ = local_5b0._8_8_;
        auVar171._0_8_ = local_5b0._0_8_;
        auVar170._8_8_ = local_5b0._8_8_;
        auVar170._0_8_ = local_5b0._0_8_;
        auVar169._8_8_ = local_5b0._8_8_;
        auVar169._0_8_ = local_5b0._0_8_;
        auVar168._8_8_ = local_5b0._8_8_;
        auVar168._0_8_ = local_5b0._0_8_;
        auVar167._8_8_ = local_5b0._8_8_;
        auVar167._0_8_ = local_5b0._0_8_;
        auVar166._8_8_ = local_5b0._8_8_;
        auVar166._0_8_ = local_5b0._0_8_;
        auVar165._8_8_ = local_5b0._8_8_;
        auVar165._0_8_ = local_5b0._0_8_;
        auVar164._8_8_ = local_5b0._8_8_;
        auVar164._0_8_ = local_5b0._0_8_;
        auVar163._8_8_ = local_5b0._8_8_;
        auVar163._0_8_ = local_5b0._0_8_;
        auVar162._8_8_ = local_5b0._8_8_;
        auVar162._0_8_ = local_5b0._0_8_;
        auVar161._8_8_ = local_5b0._8_8_;
        auVar161._0_8_ = local_5b0._0_8_;
        auVar160._8_8_ = local_5b0._8_8_;
        auVar160._0_8_ = local_5b0._0_8_;
        if (extraout_var < 1) {
          lVar778 = *plVar742;
          if ((((lVar778 == 0) ||
               (lVar743 = *(long *)(lVar713 + 0x48), local_5b0 = auVar334, local_590 = auVar684,
               lVar743 == 0)) ||
              (lVar748 = *(long *)(lVar713 + 0x40), local_5b0 = auVar335, local_590 = auVar685,
              lVar748 == 0)) ||
             (((((((lVar751 = *(long *)(lVar715 + 0x18), local_5b0 = auVar336, local_590 = auVar686,
                   lVar751 == 0 ||
                   (lVar752 = *(long *)(lVar715 + 0x38), local_5b0 = auVar337, local_590 = auVar687,
                   lVar752 == 0)) ||
                  ((lVar757 = *(long *)(param_1 + 0x18), local_5b0 = auVar338, local_590 = auVar688,
                   lVar757 == 0 ||
                   ((lVar760 = *(long *)(param_1 + 0x20), local_5b0 = auVar339, local_590 = auVar689
                    , lVar760 == 0 ||
                    (lVar764 = *(long *)(param_1 + 0x30), local_5b0 = auVar340, local_590 = auVar690
                    , lVar764 == 0)))))) ||
                 (lVar768 = *(long *)(param_1 + 0x38), local_5b0 = auVar341, local_590 = auVar691,
                 lVar768 == 0)) ||
                ((((lVar772 = *(long *)(param_1 + 0x50), local_5b0 = auVar342, local_590 = auVar692,
                   lVar772 == 0 ||
                   (lVar719 = *(long *)(param_1 + 0x60), local_5b0 = auVar343, local_590 = auVar693,
                   lVar719 == 0)) ||
                  (lVar788 = *(long *)(param_1 + 0x68), local_5b0 = auVar344, local_590 = auVar694,
                  lVar788 == 0)) ||
                 ((lVar790 = *(long *)(param_1 + 0x70), local_5b0 = auVar345, local_590 = auVar695,
                  lVar790 == 0 ||
                  (lVar791 = *(long *)(param_1 + 0x78), local_5b0 = auVar346, local_590 = auVar696,
                  lVar791 == 0)))))) ||
               (((lVar793 = *(long *)(param_1 + 0x80), local_5b0 = auVar347, local_590 = auVar697,
                 lVar793 == 0 ||
                 ((lVar753 = *(long *)(lVar717 + 0x58), local_5b0 = auVar348, local_590 = auVar698,
                  lVar753 == 0 ||
                  (lVar758 = *(long *)(lVar717 + 0x60), local_5b0 = auVar349, local_590 = auVar699,
                  lVar758 == 0)))) ||
                (lVar744 = *(long *)(lVar717 + 0x68), local_5b0 = auVar350, local_590 = auVar700,
                lVar744 == 0)))) ||
              ((((lVar749 = *(long *)(lVar717 + 0x70), local_5b0 = auVar351, local_590 = auVar701,
                 lVar749 == 0 ||
                 (lVar726 = *(long *)(param_1 + 0x88), local_5b0 = auVar352, local_590 = auVar702,
                 lVar726 == 0)) ||
                (lVar781 = *(long *)(lVar726 + 0x10), local_5b0 = auVar353, local_590 = auVar703,
                lVar781 == 0)) ||
               ((lVar761 = *(long *)(lVar726 + 0x18), local_5b0 = auVar354, local_590 = auVar704,
                lVar761 == 0 ||
                (lVar726 = *(long *)(lVar726 + 0x20), local_5b0 = auVar355, local_590 = auVar705,
                lVar726 == 0)))))))) goto LAB_0535dca8;
          local_5d0 = *(undefined8 *)(lVar778 + 0x10);
          uStack_5c8 = *(undefined8 *)(lVar778 + 0x18);
          uStack_540 = *(undefined8 *)(lVar772 + 0x10);
          local_538 = *(undefined8 *)(lVar772 + 0x18);
          uStack_520 = *(undefined8 *)(lVar788 + 0x10);
          local_518 = *(undefined8 *)(lVar788 + 0x18);
          local_5c0 = *(undefined8 *)(lVar743 + 0x10);
          uStack_530 = *(undefined8 *)(lVar719 + 0x10);
          local_528 = *(undefined8 *)(lVar719 + 0x18);
          uStack_510 = *(undefined8 *)(lVar790 + 0x10);
          local_508 = *(undefined8 *)(lVar790 + 0x18);
          uStack_5b8 = *(undefined8 *)(lVar743 + 0x18);
          uStack_500 = *(undefined8 *)(lVar791 + 0x10);
          local_4f8 = *(undefined8 *)(lVar791 + 0x18);
          uStack_480 = *(undefined8 *)(lVar726 + 0x10);
          local_478 = *(undefined8 *)(lVar726 + 0x18);
          local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x10);
          local_5b0._8_8_ = *(undefined8 *)(lVar748 + 0x18);
          uStack_490 = *(undefined8 *)(lVar761 + 0x10);
          local_488 = *(undefined8 *)(lVar761 + 0x18);
          local_5a0 = *(undefined8 *)(lVar751 + 0x10);
          local_598 = *(ulong *)(lVar751 + 0x18);
          uStack_4a0 = *(undefined8 *)(lVar781 + 0x10);
          local_498 = *(undefined8 *)(lVar781 + 0x18);
          local_590._0_8_ = *(undefined8 *)(lVar752 + 0x10);
          local_590._8_8_ = *(undefined8 *)(lVar752 + 0x18);
          uStack_4b0 = *(undefined8 *)(lVar749 + 0x10);
          local_4a8 = *(undefined8 *)(lVar749 + 0x18);
          local_580 = *(undefined8 *)(lVar757 + 0x10);
          local_578 = *(undefined8 *)(lVar757 + 0x18);
          uStack_4c0 = *(undefined8 *)(lVar744 + 0x10);
          local_4b8 = *(undefined8 *)(lVar744 + 0x18);
          local_570 = *(undefined8 *)(lVar760 + 0x10);
          uStack_568 = *(undefined8 *)(lVar760 + 0x18);
          uStack_4d0 = *(undefined8 *)(lVar758 + 0x10);
          local_4c8 = *(undefined8 *)(lVar758 + 0x18);
          local_560 = *(undefined8 *)(lVar764 + 0x10);
          local_558 = *(undefined8 *)(lVar764 + 0x18);
          uStack_4e0 = *(undefined8 *)(lVar753 + 0x10);
          local_4d8 = *(undefined8 *)(lVar753 + 0x18);
          uStack_550 = *(undefined8 *)(lVar768 + 0x10);
          local_548 = *(undefined8 *)(lVar768 + 0x18);
          uStack_4f0 = *(undefined8 *)(lVar793 + 0x10);
          local_4e8 = *(undefined8 *)(lVar793 + 0x18);
          uStack_5d8 = *puVar796;
          local_5e0 = (ulong)*(uint *)(lVar718 + 0x28);
          uStack_468 = *(undefined8 *)(param_1 + 0xf0);
          local_470 = *puVar6;
          uStack_458 = *(undefined8 *)(param_1 + 0x100);
          local_460 = *puVar7;
          uStack_448 = *(undefined8 *)(param_1 + 0x110);
          local_450 = *puVar9;
          uStack_438 = *(undefined8 *)(param_1 + 0x120);
          local_440 = *puVar8;
          local_5f8 = iVar709;
          iStack_5f4 = iVar803;
          iStack_5f0 = *(int *)(lVar718 + 0x30);
          uStack_5ec = *(undefined4 *)(lVar718 + 0x34);
          uStack_5e8 = *(undefined4 *)(lVar718 + 0x38);
          uStack_5e4 = *(undefined4 *)(lVar718 + 0x3c);
          auVar807 = FUN_03abd5c8(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40c70);
        }
        else {
          lVar778 = *plVar742;
          local_5b0 = auVar160;
          local_590 = auVar519;
          if ((((lVar778 == 0) ||
               (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar161, local_590 = auVar520,
               lVar743 == 0)) ||
              ((lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar162, local_590 = auVar521,
               lVar748 == 0 ||
               (((lVar751 = *(long *)(lVar715 + 0x38), local_5b0 = auVar163, local_590 = auVar522,
                 lVar751 == 0 ||
                 (lVar752 = *(long *)(param_1 + 0x18), local_5b0 = auVar164, local_590 = auVar523,
                 lVar752 == 0)) ||
                (lVar757 = *(long *)(param_1 + 0x30), local_5b0 = auVar165, local_590 = auVar524,
                lVar757 == 0)))))) ||
             (((lVar760 = *(long *)(param_1 + 0x38), local_5b0 = auVar166, local_590 = auVar525,
               lVar760 == 0 ||
               (lVar764 = *(long *)(param_1 + 0x50), local_5b0 = auVar167, local_590 = auVar526,
               lVar764 == 0)) ||
              ((lVar768 = *(long *)(param_1 + 0x70), local_5b0 = auVar168, local_590 = auVar527,
               lVar768 == 0 ||
               (((lVar772 = *(long *)(param_1 + 0x80), local_5b0 = auVar169, local_590 = auVar528,
                 lVar772 == 0 ||
                 (lVar719 = *(long *)(param_1 + 0x88), local_5b0 = auVar170, local_590 = auVar529,
                 lVar719 == 0)) ||
                ((lVar788 = *(long *)(lVar719 + 0x10), local_5b0 = auVar171, local_590 = auVar530,
                 lVar788 == 0 ||
                 ((lVar790 = *(long *)(lVar719 + 0x18), local_5b0 = auVar172, local_590 = auVar531,
                  lVar790 == 0 ||
                  (lVar719 = *(long *)(lVar719 + 0x20), local_5b0 = auVar173, local_590 = auVar532,
                  lVar719 == 0)))))))))))) goto LAB_0535dca8;
          uStack_5d8 = *(ulong *)(lVar778 + 0x10);
          local_5d0 = *(undefined8 *)(lVar778 + 0x18);
          local_528 = *(undefined8 *)(lVar790 + 0x10);
          uStack_520 = *(undefined8 *)(lVar790 + 0x18);
          local_518 = *(undefined8 *)(lVar719 + 0x10);
          uStack_510 = *(undefined8 *)(lVar719 + 0x18);
          local_5e0 = *puVar796;
          uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
          local_5c0 = *(undefined8 *)(lVar743 + 0x18);
          uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
          local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
          local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
          local_5a0 = *(undefined8 *)(lVar751 + 0x18);
          local_598 = *(ulong *)(lVar752 + 0x10);
          local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
          local_590._8_8_ = *(undefined8 *)(lVar757 + 0x10);
          local_580 = *(undefined8 *)(lVar757 + 0x18);
          local_578 = *(undefined8 *)(lVar760 + 0x10);
          local_570 = *(undefined8 *)(lVar760 + 0x18);
          uStack_568 = *(undefined8 *)(lVar764 + 0x10);
          local_560 = *(undefined8 *)(lVar764 + 0x18);
          local_558 = *(undefined8 *)(lVar768 + 0x10);
          uStack_550 = *(undefined8 *)(lVar768 + 0x18);
          local_548 = *(undefined8 *)(lVar772 + 0x10);
          uStack_540 = *(undefined8 *)(lVar772 + 0x18);
          local_538 = *(undefined8 *)(lVar788 + 0x10);
          uStack_530 = *(undefined8 *)(lVar788 + 0x18);
          uStack_500 = *(undefined8 *)(param_1 + 0xf0);
          local_508 = *puVar6;
          uStack_4f0 = *(undefined8 *)(param_1 + 0x100);
          local_4f8 = *puVar7;
          uStack_4e0 = *(undefined8 *)(param_1 + 0x110);
          local_4e8 = *puVar9;
          uStack_4d0 = *(undefined8 *)(param_1 + 0x120);
          local_4d8 = *puVar8;
          local_5f8 = iVar709;
          iStack_5f4 = iVar803;
          iStack_5f0 = *(int *)(lVar718 + 0x30);
          uStack_5ec = *(undefined4 *)(lVar718 + 0x34);
          uStack_5e8 = *(undefined4 *)(lVar718 + 0x38);
          uStack_5e4 = *(undefined4 *)(lVar718 + 0x3c);
          auVar807 = FUN_03abd668(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40c78);
          if (((bVar3 && bVar2) && bVar1) && iVar803 == 0) {
            auVar807 = FUN_06689568(local_8d0,local_8c8,auVar807._0_8_,auVar807._8_8_,0);
          }
          auVar675._8_8_ = local_590._8_8_;
          auVar675._0_8_ = local_590._0_8_;
          auVar674._8_8_ = local_590._8_8_;
          auVar674._0_8_ = local_590._0_8_;
          auVar673._8_8_ = local_590._8_8_;
          auVar673._0_8_ = local_590._0_8_;
          auVar672._8_8_ = local_590._8_8_;
          auVar672._0_8_ = local_590._0_8_;
          auVar671._8_8_ = local_590._8_8_;
          auVar671._0_8_ = local_590._0_8_;
          auVar670._8_8_ = local_590._8_8_;
          auVar670._0_8_ = local_590._0_8_;
          auVar536._8_8_ = local_590._8_8_;
          auVar536._0_8_ = local_590._0_8_;
          auVar535._8_8_ = local_590._8_8_;
          auVar535._0_8_ = local_590._0_8_;
          auVar534._8_8_ = local_590._8_8_;
          auVar534._0_8_ = local_590._0_8_;
          auVar533._8_8_ = local_590._8_8_;
          auVar533._0_8_ = local_590._0_8_;
          auVar325._8_8_ = local_5b0._8_8_;
          auVar325._0_8_ = local_5b0._0_8_;
          auVar324._8_8_ = local_5b0._8_8_;
          auVar324._0_8_ = local_5b0._0_8_;
          auVar323._8_8_ = local_5b0._8_8_;
          auVar323._0_8_ = local_5b0._0_8_;
          auVar322._8_8_ = local_5b0._8_8_;
          auVar322._0_8_ = local_5b0._0_8_;
          auVar321._8_8_ = local_5b0._8_8_;
          auVar321._0_8_ = local_5b0._0_8_;
          auVar320._8_8_ = local_5b0._8_8_;
          auVar320._0_8_ = local_5b0._0_8_;
          auVar177._8_8_ = local_5b0._8_8_;
          auVar177._0_8_ = local_5b0._0_8_;
          auVar176._8_8_ = local_5b0._8_8_;
          auVar176._0_8_ = local_5b0._0_8_;
          auVar175._8_8_ = local_5b0._8_8_;
          auVar175._0_8_ = local_5b0._0_8_;
          auVar174._8_8_ = local_5b0._8_8_;
          auVar174._0_8_ = local_5b0._0_8_;
          if (iVar803 == 0) {
            lVar778 = *plVar742;
            if (((((lVar778 == 0) ||
                  (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar320, local_590 = auVar670,
                  lVar743 == 0)) ||
                 (lVar748 = *(long *)(param_1 + 0x18), local_5b0 = auVar321, local_590 = auVar671,
                 lVar748 == 0)) ||
                ((lVar751 = *(long *)(param_1 + 0x20), local_5b0 = auVar322, local_590 = auVar672,
                 lVar751 == 0 ||
                 (lVar752 = *(long *)(param_1 + 0x70), local_5b0 = auVar323, local_590 = auVar673,
                 lVar752 == 0)))) ||
               ((lVar757 = *(long *)(param_1 + 0xc0), local_5b0 = auVar324, local_590 = auVar674,
                lVar757 == 0 ||
                (lVar760 = *(long *)(lVar757 + 0x10), local_5b0 = auVar325, local_590 = auVar675,
                lVar760 == 0)))) goto LAB_0535dca8;
            uStack_5d8 = *(ulong *)(lVar778 + 0x10);
            local_5d0 = *(undefined8 *)(lVar778 + 0x18);
            uStack_568 = *(undefined8 *)(lVar757 + 0x58);
            local_570 = *(undefined8 *)(lVar757 + 0x50);
            local_5e0 = *puVar796;
            uStack_5c8 = *(undefined8 *)(lVar743 + 0x10);
            local_5c0 = *(undefined8 *)(lVar743 + 0x18);
            uStack_5b8 = *(undefined8 *)(lVar748 + 0x10);
            local_5b0._0_8_ = *(undefined8 *)(lVar748 + 0x18);
            local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x10);
            local_5a0 = *(undefined8 *)(lVar751 + 0x18);
            local_598 = *(ulong *)(lVar752 + 0x10);
            local_590._0_8_ = *(undefined8 *)(lVar752 + 0x18);
            local_580 = *(undefined8 *)(lVar760 + 0x10);
            local_578 = *(undefined8 *)(lVar760 + 0x18);
            local_5f8 = (int)uVar721;
            iVar777 = local_5f8;
            iStack_5f4 = (int)((ulong)uVar721 >> 0x20);
            iVar707 = iStack_5f4;
            uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
            uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
            iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
            uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
            local_590[8] = 0 < iVar11;
            auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<XRRaycastHit>
                                 (&local_5f8,iVar10 * 3,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40be8);
            auVar678._8_8_ = local_590._8_8_;
            auVar678._0_8_ = local_590._0_8_;
            auVar677._8_8_ = local_590._8_8_;
            auVar677._0_8_ = local_590._0_8_;
            auVar676._8_8_ = local_590._8_8_;
            auVar676._0_8_ = local_590._0_8_;
            auVar328._8_8_ = local_5b0._8_8_;
            auVar328._0_8_ = local_5b0._0_8_;
            auVar327._8_8_ = local_5b0._8_8_;
            auVar327._0_8_ = local_5b0._0_8_;
            auVar326._8_8_ = local_5b0._8_8_;
            auVar326._0_8_ = local_5b0._0_8_;
            lVar778 = *plVar742;
            if ((((lVar778 == 0) ||
                 (lVar743 = *(long *)(param_1 + 0xc0), local_5b0 = auVar326, local_590 = auVar676,
                 lVar743 == 0)) ||
                (lVar748 = *(long *)(lVar743 + 0x10), local_5b0 = auVar327, local_590 = auVar677,
                lVar748 == 0)) ||
               (lVar743 = *(long *)(lVar743 + 0x18), local_5b0 = auVar328, local_590 = auVar678,
               lVar743 == 0)) goto LAB_0535dca8;
            local_5e0 = *puVar796;
            uStack_5d8 = *(ulong *)(lVar778 + 0x10);
            local_5d0 = *(undefined8 *)(lVar778 + 0x18);
            uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
            local_5c0 = *(undefined8 *)(lVar748 + 0x18);
            uStack_5b8 = *(undefined8 *)(lVar743 + 0x10);
            local_5b0._0_8_ = *(undefined8 *)(lVar743 + 0x18);
            uStack_5e8 = (undefined4)*(undefined8 *)(lVar718 + 0x38);
            uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x38) >> 0x20);
            iStack_5f0 = (int)*(undefined8 *)(lVar718 + 0x30);
            uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar718 + 0x30) >> 0x20);
            local_5f8 = iVar777;
            iStack_5f4 = iVar707;
            auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeText>
                                 (&local_5f8,iVar10 * 3,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40be0);
            auVar683._8_8_ = local_590._8_8_;
            auVar683._0_8_ = local_590._0_8_;
            auVar682._8_8_ = local_590._8_8_;
            auVar682._0_8_ = local_590._0_8_;
            auVar681._8_8_ = local_590._8_8_;
            auVar681._0_8_ = local_590._0_8_;
            auVar680._8_8_ = local_590._8_8_;
            auVar680._0_8_ = local_590._0_8_;
            auVar679._8_8_ = local_590._8_8_;
            auVar679._0_8_ = local_590._0_8_;
            auVar333._8_8_ = local_5b0._8_8_;
            auVar333._0_8_ = local_5b0._0_8_;
            auVar332._8_8_ = local_5b0._8_8_;
            auVar332._0_8_ = local_5b0._0_8_;
            auVar331._8_8_ = local_5b0._8_8_;
            auVar331._0_8_ = local_5b0._0_8_;
            auVar330._8_8_ = local_5b0._8_8_;
            auVar330._0_8_ = local_5b0._0_8_;
            auVar329._8_8_ = local_5b0._8_8_;
            auVar329._0_8_ = local_5b0._0_8_;
            lVar778 = *plVar742;
            if (((((lVar778 == 0) ||
                  (lVar743 = *(long *)(param_1 + 0x18), local_5b0 = auVar329, local_590 = auVar679,
                  lVar743 == 0)) ||
                 (lVar748 = *(long *)(param_1 + 0x20), local_5b0 = auVar330, local_590 = auVar680,
                 lVar748 == 0)) ||
                ((lVar751 = *(long *)(param_1 + 0xc0), local_5b0 = auVar331, local_590 = auVar681,
                 lVar751 == 0 ||
                 (lVar752 = *(long *)(lVar751 + 0x10), local_5b0 = auVar332, local_590 = auVar682,
                 lVar752 == 0)))) ||
               (lVar757 = *(long *)(lVar751 + 0x18), local_5b0 = auVar333, local_590 = auVar683,
               lVar757 == 0)) goto LAB_0535dca8;
            uVar763 = *puVar796;
            uVar806 = *(undefined8 *)(lVar743 + 0x10);
            uVar734 = *(undefined8 *)(lVar743 + 0x18);
            uVar720 = *(undefined8 *)(lVar748 + 0x10);
            uVar735 = *(undefined8 *)(lVar748 + 0x18);
            uVar729 = *(undefined8 *)(lVar752 + 0x10);
            uVar736 = *(undefined8 *)(lVar752 + 0x18);
            uVar779 = *(ulong *)(lVar778 + 0x10);
            uVar755 = *(ulong *)(lVar778 + 0x18);
            uVar733 = *(undefined8 *)(lVar757 + 0x10);
            uVar780 = *(ulong *)(lVar757 + 0x18);
            local_590 = FUN_042cd400(lVar751 + 0x20,*(undefined8 *)PTR_DAT_06d40c90);
            local_5f8 = 0;
            uStack_5ec = 0;
            uStack_5e8 = (undefined4)uVar763;
            uStack_5e4 = (undefined4)(uVar763 >> 0x20);
            iStack_5f4 = iVar709;
            iStack_5f0 = iVar10;
            local_5e0 = uVar779;
            uStack_5d8 = uVar755;
            local_5d0 = uVar806;
            uStack_5c8 = uVar734;
            local_5c0 = uVar720;
            uStack_5b8 = uVar735;
            local_5b0._0_8_ = uVar729;
            local_5b0._8_8_ = uVar736;
            local_5a0 = uVar733;
            local_598 = uVar780;
            auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Keyframe>
                                 (&local_5f8,iVar13 * 6,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40bd0);
            lVar778 = *(long *)(param_1 + 0xc0);
            if (lVar778 == 0) goto LAB_0535dca8;
            auVar807 = FUN_03ab36f4(*(undefined8 *)(lVar778 + 0x20),*(undefined8 *)(lVar778 + 0x28),
                                    auVar807._0_8_,auVar807._8_8_,*(undefined8 *)PTR_DAT_06d40ba0);
          }
          else {
            lVar778 = *(long *)(param_1 + 0xc0);
            local_5b0 = auVar174;
            local_590 = auVar533;
            if (((lVar778 == 0) ||
                (lVar743 = *(long *)(param_1 + 0x18), local_5b0 = auVar175, local_590 = auVar534,
                lVar743 == 0)) ||
               ((lVar748 = *(long *)(param_1 + 0x20), local_5b0 = auVar176, local_590 = auVar535,
                lVar748 == 0 ||
                (lVar751 = *(long *)(lVar778 + 0x10), local_5b0 = auVar177, local_590 = auVar536,
                lVar751 == 0)))) goto LAB_0535dca8;
            uVar720 = *(undefined8 *)(lVar778 + 0x28);
            uVar806 = *(undefined8 *)(lVar743 + 0x10);
            local_5e0 = *(ulong *)(lVar743 + 0x18);
            uStack_5d8 = *(ulong *)(lVar748 + 0x10);
            local_5d0 = *(undefined8 *)(lVar748 + 0x18);
            uStack_5c8 = *(undefined8 *)(lVar751 + 0x10);
            local_5c0 = *(undefined8 *)(lVar751 + 0x18);
            local_5f8 = CONCAT31(local_5f8._1_3_,iVar803 == 0);
            uVar729 = *(undefined8 *)PTR_DAT_06d40bb8;
            *(undefined4 *)((long)((ulong)&local_5f8 | 1) + 3) = 0;
            *(undefined4 *)((ulong)&local_5f8 | 1) = 0;
            iStack_5f0 = (int)uVar720;
            uStack_5ec = (undefined4)((ulong)uVar720 >> 0x20);
            uStack_5e8 = (undefined4)uVar806;
            uStack_5e4 = (undefined4)((ulong)uVar806 >> 0x20);
            auVar807 = FUN_03ab5914(&local_5f8,uVar720,0x100,auVar807._0_8_,auVar807._8_8_,uVar729);
          }
          iVar777 = 4;
          do {
            auVar179._8_8_ = local_5b0._8_8_;
            auVar179._0_8_ = local_5b0._0_8_;
            auVar178._8_8_ = local_5b0._8_8_;
            auVar178._0_8_ = local_5b0._0_8_;
            lVar778 = *(long *)(param_1 + 0x18);
            if (((lVar778 == 0) ||
                (lVar743 = *(long *)(param_1 + 0xc0), local_5b0 = auVar178, lVar743 == 0)) ||
               (lVar748 = *(long *)(lVar743 + 0x10), local_5b0 = auVar179, lVar748 == 0))
            goto LAB_0535dca8;
            local_5e0 = *(ulong *)(lVar748 + 0x18);
            uStack_5d8 = *(ulong *)(lVar743 + 0x28);
            local_5f8 = (int)*(undefined8 *)(lVar778 + 0x10);
            iStack_5f4 = (int)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
            iStack_5f0 = (int)*(undefined8 *)(lVar778 + 0x18);
            uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x18) >> 0x20);
            uStack_5e8 = (undefined4)*(undefined8 *)(lVar748 + 0x10);
            uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar748 + 0x10) >> 0x20);
            uStack_5c8 = *(undefined8 *)(param_1 + 0xf0);
            local_5d0 = *puVar6;
            uStack_5b8 = *(undefined8 *)(param_1 + 0x110);
            local_5c0 = *puVar9;
            auVar807 = FUN_03ab58a8(&local_5f8,uStack_5d8,0x80,auVar807._0_8_,auVar807._8_8_,
                                    *(undefined8 *)PTR_DAT_06d40bb0);
            auVar180._8_8_ = local_5b0._8_8_;
            auVar180._0_8_ = local_5b0._0_8_;
            lVar778 = *plVar742;
            if ((lVar778 == 0) ||
               (lVar743 = *(long *)(param_1 + 0x18), local_5b0 = auVar180, lVar743 == 0))
            goto LAB_0535dca8;
            local_5e0 = *(ulong *)(lVar778 + 0x18);
            uStack_5d8 = *(ulong *)(lVar743 + 0x10);
            local_5d0 = *(undefined8 *)(lVar743 + 0x18);
            iStack_5f4 = 0;
            iStack_5f0 = (int)*puVar796;
            uStack_5ec = (undefined4)(*puVar796 >> 0x20);
            uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
            uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
            local_5c0 = *(undefined8 *)(param_1 + 0xf0);
            uStack_5c8 = *puVar6;
            local_5b0._0_8_ = *(undefined8 *)(param_1 + 0x110);
            uStack_5b8 = *puVar9;
            local_5f8 = iVar803;
            auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<float>
                                 (&local_5f8,iVar10,1,auVar807._0_8_,auVar807._8_8_,
                                  *(undefined8 *)PTR_DAT_06d40bd8);
            auVar196._8_8_ = local_5b0._8_8_;
            auVar196._0_8_ = local_5b0._0_8_;
            auVar195._8_8_ = local_5b0._8_8_;
            auVar195._0_8_ = local_5b0._0_8_;
            auVar194._8_8_ = local_5b0._8_8_;
            auVar194._0_8_ = local_5b0._0_8_;
            auVar193._8_8_ = local_5b0._8_8_;
            auVar193._0_8_ = local_5b0._0_8_;
            auVar192._8_8_ = local_5b0._8_8_;
            auVar192._0_8_ = local_5b0._0_8_;
            auVar191._8_8_ = local_5b0._8_8_;
            auVar191._0_8_ = local_5b0._0_8_;
            auVar190._8_8_ = local_5b0._8_8_;
            auVar190._0_8_ = local_5b0._0_8_;
            auVar189._8_8_ = local_5b0._8_8_;
            auVar189._0_8_ = local_5b0._0_8_;
            auVar188._8_8_ = local_5b0._8_8_;
            auVar188._0_8_ = local_5b0._0_8_;
            auVar187._8_8_ = local_5b0._8_8_;
            auVar187._0_8_ = local_5b0._0_8_;
            auVar186._8_8_ = local_5b0._8_8_;
            auVar186._0_8_ = local_5b0._0_8_;
            auVar185._8_8_ = local_5b0._8_8_;
            auVar185._0_8_ = local_5b0._0_8_;
            auVar184._8_8_ = local_5b0._8_8_;
            auVar184._0_8_ = local_5b0._0_8_;
            auVar183._8_8_ = local_5b0._8_8_;
            auVar183._0_8_ = local_5b0._0_8_;
            auVar182._8_8_ = local_5b0._8_8_;
            auVar182._0_8_ = local_5b0._0_8_;
            auVar181._8_8_ = local_5b0._8_8_;
            auVar181._0_8_ = local_5b0._0_8_;
            iVar777 = iVar777 + -1;
          } while (iVar777 != 0);
          lVar778 = *plVar742;
          if ((((lVar778 == 0) ||
               (lVar743 = *(long *)(lVar713 + 0x48), local_5b0 = auVar181, lVar743 == 0)) ||
              ((lVar748 = *(long *)(lVar713 + 0x40), local_5b0 = auVar182, lVar748 == 0 ||
               (((lVar751 = *(long *)(lVar715 + 0x18), local_5b0 = auVar183, lVar751 == 0 ||
                 (lVar752 = *(long *)(lVar715 + 0x38), local_5b0 = auVar184, lVar752 == 0)) ||
                (lVar757 = *(long *)(param_1 + 0x18), local_5b0 = auVar185, lVar757 == 0)))))) ||
             (((lVar760 = *(long *)(param_1 + 0x20), local_5b0 = auVar186, lVar760 == 0 ||
               (lVar764 = *(long *)(param_1 + 0x50), local_5b0 = auVar187, lVar764 == 0)) ||
              ((lVar768 = *(long *)(param_1 + 0x60), local_5b0 = auVar188, lVar768 == 0 ||
               (((lVar772 = *(long *)(param_1 + 0x68), local_5b0 = auVar189, lVar772 == 0 ||
                 (lVar719 = *(long *)(param_1 + 0x70), local_5b0 = auVar190, lVar719 == 0)) ||
                ((lVar788 = *(long *)(param_1 + 0x78), local_5b0 = auVar191, lVar788 == 0 ||
                 ((((lVar790 = *(long *)(param_1 + 0x80), local_5b0 = auVar192, lVar790 == 0 ||
                    (lVar791 = *(long *)(lVar717 + 0x58), local_5b0 = auVar193, lVar791 == 0)) ||
                   (lVar793 = *(long *)(lVar717 + 0x60), local_5b0 = auVar194, lVar793 == 0)) ||
                  ((lVar753 = *(long *)(lVar717 + 0x68), local_5b0 = auVar195, lVar753 == 0 ||
                   (lVar758 = *(long *)(lVar717 + 0x70), local_5b0 = auVar196, lVar758 == 0)))))))))
               ))))) goto LAB_0535dca8;
          local_5e0 = *(ulong *)(lVar778 + 0x10);
          uStack_5d8 = *(ulong *)(lVar778 + 0x18);
          iStack_5f0 = *(int *)(lVar718 + 0x28);
          local_5a0 = *(undefined8 *)(lVar752 + 0x10);
          local_598 = *(ulong *)(lVar752 + 0x18);
          local_590._0_8_ = *(undefined8 *)(lVar757 + 0x10);
          local_590._8_8_ = *(undefined8 *)(lVar757 + 0x18);
          local_5d0 = *(undefined8 *)(lVar743 + 0x10);
          local_580 = *(undefined8 *)(lVar760 + 0x10);
          local_578 = *(undefined8 *)(lVar760 + 0x18);
          local_570 = *(undefined8 *)(lVar764 + 0x10);
          uStack_568 = *(undefined8 *)(lVar764 + 0x18);
          uStack_5c8 = *(undefined8 *)(lVar743 + 0x18);
          local_560 = *(undefined8 *)(lVar768 + 0x10);
          local_558 = *(undefined8 *)(lVar768 + 0x18);
          uStack_550 = *(undefined8 *)(lVar772 + 0x10);
          local_548 = *(undefined8 *)(lVar772 + 0x18);
          uStack_540 = *(undefined8 *)(lVar719 + 0x10);
          local_538 = *(undefined8 *)(lVar719 + 0x18);
          local_5c0 = *(undefined8 *)(lVar748 + 0x10);
          uStack_530 = *(undefined8 *)(lVar788 + 0x10);
          local_528 = *(undefined8 *)(lVar788 + 0x18);
          uStack_520 = *(undefined8 *)(lVar790 + 0x10);
          local_518 = *(undefined8 *)(lVar790 + 0x18);
          uStack_510 = *(undefined8 *)(lVar791 + 0x10);
          local_508 = *(undefined8 *)(lVar791 + 0x18);
          uStack_5b8 = *(undefined8 *)(lVar748 + 0x18);
          uStack_4f0 = *(undefined8 *)(lVar753 + 0x10);
          local_4e8 = *(undefined8 *)(lVar753 + 0x18);
          uStack_4e0 = *(undefined8 *)(lVar758 + 0x10);
          local_4d8 = *(undefined8 *)(lVar758 + 0x18);
          local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x10);
          local_5b0._8_8_ = *(undefined8 *)(lVar751 + 0x18);
          uStack_500 = *(undefined8 *)(lVar793 + 0x10);
          local_4f8 = *(undefined8 *)(lVar793 + 0x18);
          uStack_5e8 = (undefined4)*puVar796;
          uStack_5e4 = (undefined4)(*puVar796 >> 0x20);
          uStack_5ec = 0;
          local_5f8 = iVar709;
          iStack_5f4 = iVar803;
          auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<OVRPlugin_Vector4f>
                               (&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                                *(undefined8 *)PTR_DAT_06d40c80);
        }
        iVar803 = iVar803 + 1;
      } while (iVar803 != iVar708);
    }
    lVar778 = FUN_053461ec(0);
    auVar546._8_8_ = local_590._8_8_;
    auVar546._0_8_ = local_590._0_8_;
    auVar545._8_8_ = local_590._8_8_;
    auVar545._0_8_ = local_590._0_8_;
    auVar544._8_8_ = local_590._8_8_;
    auVar544._0_8_ = local_590._0_8_;
    auVar543._8_8_ = local_590._8_8_;
    auVar543._0_8_ = local_590._0_8_;
    auVar542._8_8_ = local_590._8_8_;
    auVar542._0_8_ = local_590._0_8_;
    auVar541._8_8_ = local_590._8_8_;
    auVar541._0_8_ = local_590._0_8_;
    auVar540._8_8_ = local_590._8_8_;
    auVar540._0_8_ = local_590._0_8_;
    auVar539._8_8_ = local_590._8_8_;
    auVar539._0_8_ = local_590._0_8_;
    auVar538._8_8_ = local_590._8_8_;
    auVar538._0_8_ = local_590._0_8_;
    auVar537._8_8_ = local_590._8_8_;
    auVar537._0_8_ = local_590._0_8_;
    if (((lVar778 == 0) || (lVar743 = *plVar742, local_590 = auVar537, lVar743 == 0)) ||
       ((((lVar748 = *(long *)(lVar715 + 0x18), local_590 = auVar538, lVar748 == 0 ||
          (((lVar751 = *(long *)(lVar715 + 0x118), local_590 = auVar539, lVar751 == 0 ||
            (lVar752 = *(long *)(lVar715 + 0x120), local_590 = auVar540, lVar752 == 0)) ||
           (lVar757 = *(long *)(lVar715 + 0x40), local_590 = auVar541, lVar757 == 0)))) ||
         (((lVar760 = *(long *)(param_1 + 0x20), local_590 = auVar542, lVar760 == 0 ||
           (lVar764 = *(long *)(param_1 + 0x40), local_590 = auVar543, lVar764 == 0)) ||
          (lVar768 = *(long *)(param_1 + 0x48), local_590 = auVar544, lVar768 == 0)))) ||
        ((lVar772 = *(long *)(param_1 + 0x58), local_590 = auVar545, lVar772 == 0 ||
         (lVar719 = *(long *)(param_1 + 0x68), local_590 = auVar546, lVar719 == 0))))))
    goto LAB_0535dca8;
    iStack_5f4 = *(int *)(lVar778 + 0x28);
    local_5e0 = *(ulong *)(lVar743 + 0x18);
    uStack_5d8 = *(ulong *)(lVar748 + 0x10);
    local_5d0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar751 + 0x10);
    local_5c0 = *(undefined8 *)(lVar751 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar752 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar752 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar757 + 0x10);
    local_5a0 = *(undefined8 *)(lVar757 + 0x18);
    local_598 = *(ulong *)(lVar760 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar760 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar764 + 0x10);
    local_580 = *(undefined8 *)(lVar764 + 0x18);
    local_578 = *(undefined8 *)(lVar768 + 0x10);
    local_570 = *(undefined8 *)(lVar768 + 0x18);
    uStack_568 = *(undefined8 *)(lVar772 + 0x10);
    local_560 = *(undefined8 *)(lVar772 + 0x18);
    local_558 = *(undefined8 *)(lVar719 + 0x10);
    uStack_550 = *(undefined8 *)(lVar719 + 0x18);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar743 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar743 + 0x10) >> 0x20);
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    local_5f8 = iVar709;
    auVar807 = FUN_03abcda8(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c08);
    auVar547._8_8_ = local_590._8_8_;
    auVar547._0_8_ = local_590._0_8_;
    auVar197._8_8_ = local_5b0._8_8_;
    auVar197._0_8_ = local_5b0._0_8_;
    if ((bVar3 && bVar2) && bVar1) {
      lVar778 = *plVar742;
      if ((lVar778 == 0) ||
         (lVar743 = *(long *)(param_1 + 0xc0), local_5b0 = auVar197, local_590 = auVar547,
         lVar743 == 0)) goto LAB_0535dca8;
      local_5f8 = (int)*puVar796;
      iStack_5f4 = (int)(*puVar796 >> 0x20);
      iStack_5f0 = (int)*(undefined8 *)(lVar778 + 0x10);
      uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
      uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x18);
      uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x18) >> 0x20);
      uStack_5d8 = *(ulong *)(lVar743 + 0x58);
      local_5e0 = *(ulong *)(lVar743 + 0x50);
      auVar808 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeQueue<SelfCollisionConstraint_ContactInfo>>
                           (&local_5f8,iVar10,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40bc0);
      auVar548._8_8_ = local_590._8_8_;
      auVar548._0_8_ = local_590._0_8_;
      auVar198._8_8_ = local_5b0._8_8_;
      auVar198._0_8_ = local_5b0._0_8_;
      lVar778 = *(long *)(param_1 + 0x18);
      if ((lVar778 == 0) ||
         (lVar743 = *(long *)(param_1 + 0xc0), local_5b0 = auVar198, local_590 = auVar548,
         lVar743 == 0)) goto LAB_0535dca8;
      uVar721 = *(undefined8 *)(lVar743 + 0x38);
      local_5f8 = (int)*(undefined8 *)(lVar778 + 0x10);
      iStack_5f4 = (int)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
      iStack_5f0 = (int)*(undefined8 *)(lVar778 + 0x18);
      uStack_5ec = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x18) >> 0x20);
      uStack_5e8 = (undefined4)uVar721;
      uStack_5e4 = (undefined4)((ulong)uVar721 >> 0x20);
      uStack_5d8 = *(ulong *)(lVar743 + 0x58);
      local_5e0 = *(ulong *)(lVar743 + 0x50);
      auVar808 = FUN_03ab583c(&local_5f8,uVar721,0x80,auVar808._0_8_,auVar808._8_8_,
                              *(undefined8 *)PTR_DAT_06d40ba8);
    }
    else {
      auVar808 = ZEXT816(0);
    }
    auVar560._8_8_ = local_590._8_8_;
    auVar560._0_8_ = local_590._0_8_;
    auVar559._8_8_ = local_590._8_8_;
    auVar559._0_8_ = local_590._0_8_;
    auVar558._8_8_ = local_590._8_8_;
    auVar558._0_8_ = local_590._0_8_;
    auVar557._8_8_ = local_590._8_8_;
    auVar557._0_8_ = local_590._0_8_;
    auVar556._8_8_ = local_590._8_8_;
    auVar556._0_8_ = local_590._0_8_;
    auVar555._8_8_ = local_590._8_8_;
    auVar555._0_8_ = local_590._0_8_;
    auVar554._8_8_ = local_590._8_8_;
    auVar554._0_8_ = local_590._0_8_;
    auVar553._8_8_ = local_590._8_8_;
    auVar553._0_8_ = local_590._0_8_;
    auVar552._8_8_ = local_590._8_8_;
    auVar552._0_8_ = local_590._0_8_;
    auVar551._8_8_ = local_590._8_8_;
    auVar551._0_8_ = local_590._0_8_;
    auVar550._8_8_ = local_590._8_8_;
    auVar550._0_8_ = local_590._0_8_;
    auVar549._8_8_ = local_590._8_8_;
    auVar549._0_8_ = local_590._0_8_;
    auVar210._8_8_ = local_5b0._8_8_;
    auVar210._0_8_ = local_5b0._0_8_;
    auVar209._8_8_ = local_5b0._8_8_;
    auVar209._0_8_ = local_5b0._0_8_;
    auVar208._8_8_ = local_5b0._8_8_;
    auVar208._0_8_ = local_5b0._0_8_;
    auVar207._8_8_ = local_5b0._8_8_;
    auVar207._0_8_ = local_5b0._0_8_;
    auVar206._8_8_ = local_5b0._8_8_;
    auVar206._0_8_ = local_5b0._0_8_;
    auVar205._8_8_ = local_5b0._8_8_;
    auVar205._0_8_ = local_5b0._0_8_;
    auVar204._8_8_ = local_5b0._8_8_;
    auVar204._0_8_ = local_5b0._0_8_;
    auVar203._8_8_ = local_5b0._8_8_;
    auVar203._0_8_ = local_5b0._0_8_;
    auVar202._8_8_ = local_5b0._8_8_;
    auVar202._0_8_ = local_5b0._0_8_;
    auVar201._8_8_ = local_5b0._8_8_;
    auVar201._0_8_ = local_5b0._0_8_;
    auVar200._8_8_ = local_5b0._8_8_;
    auVar200._0_8_ = local_5b0._0_8_;
    auVar199._8_8_ = local_5b0._8_8_;
    auVar199._0_8_ = local_5b0._0_8_;
    lVar778 = *plVar742;
    if (((((lVar778 == 0) ||
          (lVar743 = *(long *)(lVar713 + 0x40), local_5b0 = auVar199, local_590 = auVar549,
          lVar743 == 0)) ||
         (lVar748 = *(long *)(lVar715 + 0x18), local_5b0 = auVar200, local_590 = auVar550,
         lVar748 == 0)) ||
        (((lVar751 = *(long *)(lVar715 + 0x118), local_5b0 = auVar201, local_590 = auVar551,
          lVar751 == 0 ||
          (lVar752 = *(long *)(lVar715 + 0x120), local_5b0 = auVar202, local_590 = auVar552,
          lVar752 == 0)) ||
         ((lVar757 = *(long *)(lVar715 + 200), local_5b0 = auVar203, local_590 = auVar553,
          lVar757 == 0 ||
          ((lVar760 = *(long *)(lVar715 + 0xd0), local_5b0 = auVar204, local_590 = auVar554,
           lVar760 == 0 ||
           (lVar764 = *(long *)(lVar715 + 0xd8), local_5b0 = auVar205, local_590 = auVar555,
           lVar764 == 0)))))))) ||
       ((lVar768 = *(long *)(lVar715 + 0x48), local_5b0 = auVar206, local_590 = auVar556,
        lVar768 == 0 ||
        ((((lVar772 = *(long *)(lVar715 + 0x50), local_5b0 = auVar207, local_590 = auVar557,
           lVar772 == 0 ||
           (lVar719 = *(long *)(lVar715 + 0x60), local_5b0 = auVar208, local_590 = auVar558,
           lVar719 == 0)) ||
          (lVar788 = *(long *)(lVar715 + 0x68), local_5b0 = auVar209, local_590 = auVar559,
          lVar788 == 0)) ||
         (lVar790 = *(long *)(lVar715 + 0xb8), local_5b0 = auVar210, local_590 = auVar560,
         lVar790 == 0)))))) goto LAB_0535dca8;
    local_538 = *(undefined8 *)(lVar788 + 0x10);
    uStack_530 = *(undefined8 *)(lVar788 + 0x18);
    local_5e0 = *(ulong *)(lVar778 + 0x18);
    uStack_5d8 = *(ulong *)(lVar743 + 0x10);
    local_5d0 = *(undefined8 *)(lVar743 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
    local_5c0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
    local_5a0 = *(undefined8 *)(lVar752 + 0x18);
    local_598 = *(ulong *)(lVar757 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar760 + 0x10);
    local_580 = *(undefined8 *)(lVar760 + 0x18);
    local_578 = *(undefined8 *)(lVar764 + 0x10);
    local_570 = *(undefined8 *)(lVar764 + 0x18);
    uStack_568 = *(undefined8 *)(lVar768 + 0x10);
    local_560 = *(undefined8 *)(lVar768 + 0x18);
    local_558 = *(undefined8 *)(lVar772 + 0x10);
    uStack_550 = *(undefined8 *)(lVar772 + 0x18);
    local_548 = *(undefined8 *)(lVar719 + 0x10);
    uStack_540 = *(undefined8 *)(lVar719 + 0x18);
    local_528 = *(undefined8 *)(lVar790 + 0x10);
    uStack_520 = *(undefined8 *)(lVar790 + 0x18);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    iStack_5f4 = 0;
    local_5f8 = iVar709;
    auVar807 = FUN_03abcd08(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c00);
    auVar565._8_8_ = local_590._8_8_;
    auVar565._0_8_ = local_590._0_8_;
    auVar564._8_8_ = local_590._8_8_;
    auVar564._0_8_ = local_590._0_8_;
    auVar563._8_8_ = local_590._8_8_;
    auVar563._0_8_ = local_590._0_8_;
    auVar562._8_8_ = local_590._8_8_;
    auVar562._0_8_ = local_590._0_8_;
    auVar561._8_8_ = local_590._8_8_;
    auVar561._0_8_ = local_590._0_8_;
    auVar215._8_8_ = local_5b0._8_8_;
    auVar215._0_8_ = local_5b0._0_8_;
    auVar214._8_8_ = local_5b0._8_8_;
    auVar214._0_8_ = local_5b0._0_8_;
    auVar213._8_8_ = local_5b0._8_8_;
    auVar213._0_8_ = local_5b0._0_8_;
    auVar212._8_8_ = local_5b0._8_8_;
    auVar212._0_8_ = local_5b0._0_8_;
    auVar211._8_8_ = local_5b0._8_8_;
    auVar211._0_8_ = local_5b0._0_8_;
    lVar778 = *plVar742;
    if (((lVar778 == 0) ||
        (lVar743 = *(long *)(lVar715 + 0x118), local_5b0 = auVar211, local_590 = auVar561,
        lVar743 == 0)) ||
       (((lVar748 = *(long *)(lVar715 + 0x88), local_5b0 = auVar212, local_590 = auVar562,
         lVar748 == 0 ||
         ((lVar751 = *(long *)(lVar715 + 0x90), local_5b0 = auVar213, local_590 = auVar563,
          lVar751 == 0 ||
          (lVar752 = *(long *)(lVar715 + 0x98), local_5b0 = auVar214, local_590 = auVar564,
          lVar752 == 0)))) ||
        (lVar757 = *(long *)(lVar715 + 0x78), local_5b0 = auVar215, local_590 = auVar565,
        lVar757 == 0)))) goto LAB_0535dca8;
    local_5e0 = *(ulong *)(lVar778 + 0x18);
    uStack_5d8 = *(ulong *)(lVar743 + 0x10);
    local_5d0 = *(undefined8 *)(lVar743 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
    local_5c0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
    local_5a0 = *(undefined8 *)(lVar752 + 0x18);
    local_598 = *(ulong *)(lVar757 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
    iStack_5f4 = 0;
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
    local_5f8 = iVar709;
    auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<SelfCollisionConstraint_GridInfo>
                         (&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                          *(undefined8 *)PTR_DAT_06d40bf8);
    auVar574._8_8_ = local_590._8_8_;
    auVar574._0_8_ = local_590._0_8_;
    auVar573._8_8_ = local_590._8_8_;
    auVar573._0_8_ = local_590._0_8_;
    auVar572._8_8_ = local_590._8_8_;
    auVar572._0_8_ = local_590._0_8_;
    auVar571._8_8_ = local_590._8_8_;
    auVar571._0_8_ = local_590._0_8_;
    auVar570._8_8_ = local_590._8_8_;
    auVar570._0_8_ = local_590._0_8_;
    auVar569._8_8_ = local_590._8_8_;
    auVar569._0_8_ = local_590._0_8_;
    auVar568._8_8_ = local_590._8_8_;
    auVar568._0_8_ = local_590._0_8_;
    auVar567._8_8_ = local_590._8_8_;
    auVar567._0_8_ = local_590._0_8_;
    auVar566._8_8_ = local_590._8_8_;
    auVar566._0_8_ = local_590._0_8_;
    auVar224._8_8_ = local_5b0._8_8_;
    auVar224._0_8_ = local_5b0._0_8_;
    auVar223._8_8_ = local_5b0._8_8_;
    auVar223._0_8_ = local_5b0._0_8_;
    auVar222._8_8_ = local_5b0._8_8_;
    auVar222._0_8_ = local_5b0._0_8_;
    auVar221._8_8_ = local_5b0._8_8_;
    auVar221._0_8_ = local_5b0._0_8_;
    auVar220._8_8_ = local_5b0._8_8_;
    auVar220._0_8_ = local_5b0._0_8_;
    auVar219._8_8_ = local_5b0._8_8_;
    auVar219._0_8_ = local_5b0._0_8_;
    auVar218._8_8_ = local_5b0._8_8_;
    auVar218._0_8_ = local_5b0._0_8_;
    auVar217._8_8_ = local_5b0._8_8_;
    auVar217._0_8_ = local_5b0._0_8_;
    auVar216._8_8_ = local_5b0._8_8_;
    auVar216._0_8_ = local_5b0._0_8_;
    lVar778 = *plVar742;
    if (((((lVar778 == 0) ||
          (lVar743 = *(long *)(lVar714 + 0x28), local_5b0 = auVar216, local_590 = auVar566,
          lVar743 == 0)) ||
         (lVar748 = *(long *)(lVar714 + 0x30), local_5b0 = auVar217, local_590 = auVar567,
         lVar748 == 0)) ||
        ((((lVar751 = *(long *)(lVar715 + 0x118), local_5b0 = auVar218, local_590 = auVar568,
           lVar751 == 0 ||
           (lVar752 = *(long *)(lVar715 + 0x120), local_5b0 = auVar219, local_590 = auVar569,
           lVar752 == 0)) ||
          ((lVar757 = *(long *)(lVar715 + 0x90), local_5b0 = auVar220, local_590 = auVar570,
           lVar757 == 0 ||
           ((lVar760 = *(long *)(lVar715 + 0x98), local_5b0 = auVar221, local_590 = auVar571,
            lVar760 == 0 ||
            (lVar764 = *(long *)(lVar715 + 0x20), local_5b0 = auVar222, local_590 = auVar572,
            lVar764 == 0)))))) ||
         (lVar768 = *(long *)(lVar715 + 0x70), local_5b0 = auVar223, local_590 = auVar573,
         lVar768 == 0)))) ||
       (lVar772 = *(long *)(lVar715 + 0x110), local_5b0 = auVar224, local_590 = auVar574,
       lVar772 == 0)) goto LAB_0535dca8;
    local_5e0 = *(ulong *)(lVar778 + 0x18);
    uStack_5d8 = *(ulong *)(lVar743 + 0x10);
    local_5d0 = *(undefined8 *)(lVar743 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar748 + 0x10);
    local_5c0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar751 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar751 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar752 + 0x10);
    local_5a0 = *(undefined8 *)(lVar752 + 0x18);
    local_598 = *(ulong *)(lVar757 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar757 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar760 + 0x10);
    local_580 = *(undefined8 *)(lVar760 + 0x18);
    local_578 = *(undefined8 *)(lVar764 + 0x10);
    local_570 = *(undefined8 *)(lVar764 + 0x18);
    uStack_568 = *(undefined8 *)(lVar768 + 0x10);
    local_560 = *(undefined8 *)(lVar768 + 0x18);
    local_558 = *(undefined8 *)(lVar772 + 0x10);
    uStack_550 = *(undefined8 *)(lVar772 + 0x18);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar778 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar778 + 0x10) >> 0x20);
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    iStack_5f4 = 0;
    local_5f8 = iVar709;
    auVar807 = FUN_03abce48(&local_5f8,iVar13,1,auVar807._0_8_,auVar807._8_8_,
                            *(undefined8 *)PTR_DAT_06d40c10);
    lVar778 = FUN_053461ec(0);
    auVar587._8_8_ = local_590._8_8_;
    auVar587._0_8_ = local_590._0_8_;
    auVar586._8_8_ = local_590._8_8_;
    auVar586._0_8_ = local_590._0_8_;
    auVar585._8_8_ = local_590._8_8_;
    auVar585._0_8_ = local_590._0_8_;
    auVar584._8_8_ = local_590._8_8_;
    auVar584._0_8_ = local_590._0_8_;
    auVar583._8_8_ = local_590._8_8_;
    auVar583._0_8_ = local_590._0_8_;
    auVar582._8_8_ = local_590._8_8_;
    auVar582._0_8_ = local_590._0_8_;
    auVar581._8_8_ = local_590._8_8_;
    auVar581._0_8_ = local_590._0_8_;
    auVar580._8_8_ = local_590._8_8_;
    auVar580._0_8_ = local_590._0_8_;
    auVar579._8_8_ = local_590._8_8_;
    auVar579._0_8_ = local_590._0_8_;
    auVar578._8_8_ = local_590._8_8_;
    auVar578._0_8_ = local_590._0_8_;
    auVar577._8_8_ = local_590._8_8_;
    auVar577._0_8_ = local_590._0_8_;
    auVar576._8_8_ = local_590._8_8_;
    auVar576._0_8_ = local_590._0_8_;
    auVar575._8_8_ = local_590._8_8_;
    auVar575._0_8_ = local_590._0_8_;
    auVar237._8_8_ = local_5b0._8_8_;
    auVar237._0_8_ = local_5b0._0_8_;
    auVar236._8_8_ = local_5b0._8_8_;
    auVar236._0_8_ = local_5b0._0_8_;
    auVar235._8_8_ = local_5b0._8_8_;
    auVar235._0_8_ = local_5b0._0_8_;
    auVar234._8_8_ = local_5b0._8_8_;
    auVar234._0_8_ = local_5b0._0_8_;
    auVar233._8_8_ = local_5b0._8_8_;
    auVar233._0_8_ = local_5b0._0_8_;
    auVar232._8_8_ = local_5b0._8_8_;
    auVar232._0_8_ = local_5b0._0_8_;
    auVar231._8_8_ = local_5b0._8_8_;
    auVar231._0_8_ = local_5b0._0_8_;
    auVar230._8_8_ = local_5b0._8_8_;
    auVar230._0_8_ = local_5b0._0_8_;
    auVar229._8_8_ = local_5b0._8_8_;
    auVar229._0_8_ = local_5b0._0_8_;
    auVar228._8_8_ = local_5b0._8_8_;
    auVar228._0_8_ = local_5b0._0_8_;
    auVar227._8_8_ = local_5b0._8_8_;
    auVar227._0_8_ = local_5b0._0_8_;
    auVar226._8_8_ = local_5b0._8_8_;
    auVar226._0_8_ = local_5b0._0_8_;
    auVar225._8_8_ = local_5b0._8_8_;
    auVar225._0_8_ = local_5b0._0_8_;
    if (((((((lVar778 == 0) ||
            (lVar743 = *plVar742, local_5b0 = auVar225, local_590 = auVar575, lVar743 == 0)) ||
           (lVar748 = *(long *)(lVar713 + 0x48), local_5b0 = auVar226, local_590 = auVar576,
           lVar748 == 0)) ||
          ((lVar751 = *(long *)(lVar717 + 0x30), local_5b0 = auVar227, local_590 = auVar577,
           lVar751 == 0 ||
           (lVar752 = *(long *)(lVar717 + 0x38), local_5b0 = auVar228, local_590 = auVar578,
           lVar752 == 0)))) ||
         ((lVar757 = *(long *)(lVar717 + 0x48), local_5b0 = auVar229, local_590 = auVar579,
          lVar757 == 0 ||
          ((lVar760 = *(long *)(lVar717 + 0x50), local_5b0 = auVar230, local_590 = auVar580,
           lVar760 == 0 ||
           (lVar764 = *(long *)(lVar714 + 0x28), local_5b0 = auVar231, local_590 = auVar581,
           lVar764 == 0)))))) ||
        (lVar768 = *(long *)(lVar714 + 0x30), local_5b0 = auVar232, local_590 = auVar582,
        lVar768 == 0)) ||
       ((((lVar772 = *(long *)(lVar714 + 0x38), local_5b0 = auVar233, local_590 = auVar583,
          lVar772 == 0 ||
          (lVar719 = *(long *)(lVar714 + 0x40), local_5b0 = auVar234, local_590 = auVar584,
          lVar719 == 0)) ||
         (lVar788 = *(long *)(lVar714 + 0x48), local_5b0 = auVar235, local_590 = auVar585,
         lVar788 == 0)) ||
        ((lVar790 = *(long *)(lVar715 + 0x18), local_5b0 = auVar236, local_590 = auVar586,
         lVar790 == 0 ||
         (lVar791 = *(long *)(lVar715 + 0x58), local_5b0 = auVar237, local_590 = auVar587,
         lVar791 == 0)))))) goto LAB_0535dca8;
    local_5f8 = *(int *)(lVar778 + 0x28);
    local_5e0 = *(ulong *)(lVar743 + 0x18);
    uStack_5d8 = *(ulong *)(lVar748 + 0x10);
    local_5d0 = *(undefined8 *)(lVar748 + 0x18);
    uStack_5c8 = *(undefined8 *)(lVar751 + 0x10);
    local_5c0 = *(undefined8 *)(lVar751 + 0x18);
    uStack_5b8 = *(undefined8 *)(lVar752 + 0x10);
    local_5b0._0_8_ = *(undefined8 *)(lVar752 + 0x18);
    local_5b0._8_8_ = *(undefined8 *)(lVar757 + 0x10);
    local_5a0 = *(undefined8 *)(lVar757 + 0x18);
    local_598 = *(ulong *)(lVar760 + 0x10);
    local_590._0_8_ = *(undefined8 *)(lVar760 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar764 + 0x10);
    local_580 = *(undefined8 *)(lVar764 + 0x18);
    local_578 = *(undefined8 *)(lVar768 + 0x10);
    local_570 = *(undefined8 *)(lVar768 + 0x18);
    uStack_568 = *(undefined8 *)(lVar772 + 0x10);
    local_560 = *(undefined8 *)(lVar772 + 0x18);
    local_558 = *(undefined8 *)(lVar719 + 0x10);
    uStack_550 = *(undefined8 *)(lVar719 + 0x18);
    local_548 = *(undefined8 *)(lVar788 + 0x10);
    uStack_540 = *(undefined8 *)(lVar788 + 0x18);
    local_538 = *(undefined8 *)(lVar790 + 0x10);
    uStack_530 = *(undefined8 *)(lVar790 + 0x18);
    local_528 = *(undefined8 *)(lVar791 + 0x10);
    uStack_520 = *(undefined8 *)(lVar791 + 0x18);
    iStack_5f0 = (int)*puVar796;
    uStack_5ec = (undefined4)(*puVar796 >> 0x20);
    uStack_5e8 = (undefined4)*(undefined8 *)(lVar743 + 0x10);
    uStack_5e4 = (undefined4)((ulong)*(undefined8 *)(lVar743 + 0x10) >> 0x20);
    iStack_5f4 = 0;
    auVar807 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__WriteArrayElement<DecalEntity>
                         (&local_5f8,iVar10,1,auVar807._0_8_,auVar807._8_8_,
                          *(undefined8 *)PTR_DAT_06d40c18);
    if ((bVar3 && bVar2) && bVar1) {
      auVar807 = FUN_06689568(auVar807._0_8_,auVar807._8_8_,auVar808._0_8_,auVar808._8_8_,0);
    }
  }
  if (iVar712 < 1) {
    auVar808 = ZEXT816(0);
  }
  else {
    if (lVar718 == 0) goto LAB_0535dca8;
    uVar721 = *(undefined8 *)(lVar713 + 0xb8);
    uVar806 = *(undefined8 *)(lVar718 + 0x30);
    uVar720 = *(undefined8 *)(lVar718 + 0x38);
    uVar804 = *(undefined4 *)(lVar718 + 0x28);
    uVar711 = FUN_0536a17c(lVar713,0);
    auVar591._8_8_ = local_590._8_8_;
    auVar591._0_8_ = local_590._0_8_;
    auVar590._8_8_ = local_590._8_8_;
    auVar590._0_8_ = local_590._0_8_;
    auVar589._8_8_ = local_590._8_8_;
    auVar589._0_8_ = local_590._0_8_;
    auVar588._8_8_ = local_590._8_8_;
    auVar588._0_8_ = local_590._0_8_;
    auVar241._8_8_ = local_5b0._8_8_;
    auVar241._0_8_ = local_5b0._0_8_;
    auVar240._8_8_ = local_5b0._8_8_;
    auVar240._0_8_ = local_5b0._0_8_;
    auVar239._8_8_ = local_5b0._8_8_;
    auVar239._0_8_ = local_5b0._0_8_;
    auVar238._8_8_ = local_5b0._8_8_;
    auVar238._0_8_ = local_5b0._0_8_;
    lVar718 = *(long *)(lVar713 + 0x10);
    if (((lVar718 == 0) ||
        (lVar778 = *(long *)(lVar713 + 0x48), local_5b0 = auVar238, local_590 = auVar588,
        lVar778 == 0)) ||
       ((lVar743 = *(long *)(lVar713 + 0x18), local_5b0 = auVar239, local_590 = auVar589,
        lVar743 == 0 ||
        ((lVar713 = *(long *)(lVar713 + 0x40), local_5b0 = auVar240, local_590 = auVar590,
         lVar713 == 0 || (local_5b0 = auVar241, local_590 = auVar591, lVar716 == 0))))))
    goto LAB_0535dca8;
    uVar779 = *(ulong *)(lVar718 + 0x10);
    uVar729 = *(undefined8 *)(lVar718 + 0x18);
    uVar733 = *(undefined8 *)(lVar778 + 0x10);
    uVar734 = *(undefined8 *)(lVar778 + 0x18);
    uVar735 = *(undefined8 *)(lVar743 + 0x10);
    uVar736 = *(undefined8 *)(lVar743 + 0x18);
    uVar737 = *(undefined8 *)(lVar713 + 0x10);
    uVar738 = *(undefined8 *)(lVar713 + 0x18);
    uVar710 = FUN_05369508(lVar716,0);
    auVar668._8_8_ = local_590._8_8_;
    auVar668._0_8_ = local_590._0_8_;
    auVar667._8_8_ = local_590._8_8_;
    auVar667._0_8_ = local_590._0_8_;
    auVar666._8_8_ = local_590._8_8_;
    auVar666._0_8_ = local_590._0_8_;
    auVar665._8_8_ = local_590._8_8_;
    auVar665._0_8_ = local_590._0_8_;
    auVar664._8_8_ = local_590._8_8_;
    auVar664._0_8_ = local_590._0_8_;
    auVar663._8_8_ = local_590._8_8_;
    auVar663._0_8_ = local_590._0_8_;
    auVar662._8_8_ = local_590._8_8_;
    auVar662._0_8_ = local_590._0_8_;
    auVar661._8_8_ = local_590._8_8_;
    auVar661._0_8_ = local_590._0_8_;
    auVar660._8_8_ = local_590._8_8_;
    auVar660._0_8_ = local_590._0_8_;
    auVar659._8_8_ = local_590._8_8_;
    auVar659._0_8_ = local_590._0_8_;
    auVar658._8_8_ = local_590._8_8_;
    auVar658._0_8_ = local_590._0_8_;
    auVar657._8_8_ = local_590._8_8_;
    auVar657._0_8_ = local_590._0_8_;
    auVar656._8_8_ = local_590._8_8_;
    auVar656._0_8_ = local_590._0_8_;
    auVar655._8_8_ = local_590._8_8_;
    auVar655._0_8_ = local_590._0_8_;
    auVar654._8_8_ = local_590._8_8_;
    auVar654._0_8_ = local_590._0_8_;
    auVar653._8_8_ = local_590._8_8_;
    auVar653._0_8_ = local_590._0_8_;
    auVar652._8_8_ = local_590._8_8_;
    auVar652._0_8_ = local_590._0_8_;
    auVar651._8_8_ = local_590._8_8_;
    auVar651._0_8_ = local_590._0_8_;
    auVar650._8_8_ = local_590._8_8_;
    auVar650._0_8_ = local_590._0_8_;
    auVar649._8_8_ = local_590._8_8_;
    auVar649._0_8_ = local_590._0_8_;
    auVar648._8_8_ = local_590._8_8_;
    auVar648._0_8_ = local_590._0_8_;
    auVar647._8_8_ = local_590._8_8_;
    auVar647._0_8_ = local_590._0_8_;
    auVar646._8_8_ = local_590._8_8_;
    auVar646._0_8_ = local_590._0_8_;
    auVar645._8_8_ = local_590._8_8_;
    auVar645._0_8_ = local_590._0_8_;
    auVar644._8_8_ = local_590._8_8_;
    auVar644._0_8_ = local_590._0_8_;
    auVar643._8_8_ = local_590._8_8_;
    auVar643._0_8_ = local_590._0_8_;
    auVar642._8_8_ = local_590._8_8_;
    auVar642._0_8_ = local_590._0_8_;
    auVar641._8_8_ = local_590._8_8_;
    auVar641._0_8_ = local_590._0_8_;
    auVar640._8_8_ = local_590._8_8_;
    auVar640._0_8_ = local_590._0_8_;
    auVar639._8_8_ = local_590._8_8_;
    auVar639._0_8_ = local_590._0_8_;
    auVar638._8_8_ = local_590._8_8_;
    auVar638._0_8_ = local_590._0_8_;
    auVar637._8_8_ = local_590._8_8_;
    auVar637._0_8_ = local_590._0_8_;
    auVar636._8_8_ = local_590._8_8_;
    auVar636._0_8_ = local_590._0_8_;
    auVar635._8_8_ = local_590._8_8_;
    auVar635._0_8_ = local_590._0_8_;
    auVar634._8_8_ = local_590._8_8_;
    auVar634._0_8_ = local_590._0_8_;
    auVar633._8_8_ = local_590._8_8_;
    auVar633._0_8_ = local_590._0_8_;
    auVar632._8_8_ = local_590._8_8_;
    auVar632._0_8_ = local_590._0_8_;
    auVar631._8_8_ = local_590._8_8_;
    auVar631._0_8_ = local_590._0_8_;
    auVar630._8_8_ = local_590._8_8_;
    auVar630._0_8_ = local_590._0_8_;
    auVar629._8_8_ = local_590._8_8_;
    auVar629._0_8_ = local_590._0_8_;
    auVar628._8_8_ = local_590._8_8_;
    auVar628._0_8_ = local_590._0_8_;
    auVar627._8_8_ = local_590._8_8_;
    auVar627._0_8_ = local_590._0_8_;
    auVar626._8_8_ = local_590._8_8_;
    auVar626._0_8_ = local_590._0_8_;
    auVar625._8_8_ = local_590._8_8_;
    auVar625._0_8_ = local_590._0_8_;
    auVar624._8_8_ = local_590._8_8_;
    auVar624._0_8_ = local_590._0_8_;
    auVar623._8_8_ = local_590._8_8_;
    auVar623._0_8_ = local_590._0_8_;
    auVar622._8_8_ = local_590._8_8_;
    auVar622._0_8_ = local_590._0_8_;
    auVar621._8_8_ = local_590._8_8_;
    auVar621._0_8_ = local_590._0_8_;
    auVar620._8_8_ = local_590._8_8_;
    auVar620._0_8_ = local_590._0_8_;
    auVar619._8_8_ = local_590._8_8_;
    auVar619._0_8_ = local_590._0_8_;
    auVar618._8_8_ = local_590._8_8_;
    auVar618._0_8_ = local_590._0_8_;
    auVar617._8_8_ = local_590._8_8_;
    auVar617._0_8_ = local_590._0_8_;
    auVar616._8_8_ = local_590._8_8_;
    auVar616._0_8_ = local_590._0_8_;
    auVar615._8_8_ = local_590._8_8_;
    auVar615._0_8_ = local_590._0_8_;
    auVar614._8_8_ = local_590._8_8_;
    auVar614._0_8_ = local_590._0_8_;
    auVar613._8_8_ = local_590._8_8_;
    auVar613._0_8_ = local_590._0_8_;
    auVar612._8_8_ = local_590._8_8_;
    auVar612._0_8_ = local_590._0_8_;
    auVar611._8_8_ = local_590._8_8_;
    auVar611._0_8_ = local_590._0_8_;
    auVar610._8_8_ = local_590._8_8_;
    auVar610._0_8_ = local_590._0_8_;
    auVar609._8_8_ = local_590._8_8_;
    auVar609._0_8_ = local_590._0_8_;
    auVar608._8_8_ = local_590._8_8_;
    auVar608._0_8_ = local_590._0_8_;
    auVar607._8_8_ = local_590._8_8_;
    auVar607._0_8_ = local_590._0_8_;
    auVar606._8_8_ = local_590._8_8_;
    auVar606._0_8_ = local_590._0_8_;
    auVar605._8_8_ = local_590._8_8_;
    auVar605._0_8_ = local_590._0_8_;
    auVar604._8_8_ = local_590._8_8_;
    auVar604._0_8_ = local_590._0_8_;
    auVar603._8_8_ = local_590._8_8_;
    auVar603._0_8_ = local_590._0_8_;
    auVar602._8_8_ = local_590._8_8_;
    auVar602._0_8_ = local_590._0_8_;
    auVar601._8_8_ = local_590._8_8_;
    auVar601._0_8_ = local_590._0_8_;
    auVar600._8_8_ = local_590._8_8_;
    auVar600._0_8_ = local_590._0_8_;
    auVar599._8_8_ = local_590._8_8_;
    auVar599._0_8_ = local_590._0_8_;
    auVar598._8_8_ = local_590._8_8_;
    auVar598._0_8_ = local_590._0_8_;
    auVar597._8_8_ = local_590._8_8_;
    auVar597._0_8_ = local_590._0_8_;
    auVar596._8_8_ = local_590._8_8_;
    auVar596._0_8_ = local_590._0_8_;
    auVar595._8_8_ = local_590._8_8_;
    auVar595._0_8_ = local_590._0_8_;
    auVar594._8_8_ = local_590._8_8_;
    auVar594._0_8_ = local_590._0_8_;
    auVar593._8_8_ = local_590._8_8_;
    auVar593._0_8_ = local_590._0_8_;
    auVar592._8_8_ = local_590._8_8_;
    auVar592._0_8_ = local_590._0_8_;
    auVar318._8_8_ = local_5b0._8_8_;
    auVar318._0_8_ = local_5b0._0_8_;
    auVar317._8_8_ = local_5b0._8_8_;
    auVar317._0_8_ = local_5b0._0_8_;
    auVar316._8_8_ = local_5b0._8_8_;
    auVar316._0_8_ = local_5b0._0_8_;
    auVar315._8_8_ = local_5b0._8_8_;
    auVar315._0_8_ = local_5b0._0_8_;
    auVar314._8_8_ = local_5b0._8_8_;
    auVar314._0_8_ = local_5b0._0_8_;
    auVar313._8_8_ = local_5b0._8_8_;
    auVar313._0_8_ = local_5b0._0_8_;
    auVar312._8_8_ = local_5b0._8_8_;
    auVar312._0_8_ = local_5b0._0_8_;
    auVar311._8_8_ = local_5b0._8_8_;
    auVar311._0_8_ = local_5b0._0_8_;
    auVar310._8_8_ = local_5b0._8_8_;
    auVar310._0_8_ = local_5b0._0_8_;
    auVar309._8_8_ = local_5b0._8_8_;
    auVar309._0_8_ = local_5b0._0_8_;
    auVar308._8_8_ = local_5b0._8_8_;
    auVar308._0_8_ = local_5b0._0_8_;
    auVar307._8_8_ = local_5b0._8_8_;
    auVar307._0_8_ = local_5b0._0_8_;
    auVar306._8_8_ = local_5b0._8_8_;
    auVar306._0_8_ = local_5b0._0_8_;
    auVar305._8_8_ = local_5b0._8_8_;
    auVar305._0_8_ = local_5b0._0_8_;
    auVar304._8_8_ = local_5b0._8_8_;
    auVar304._0_8_ = local_5b0._0_8_;
    auVar303._8_8_ = local_5b0._8_8_;
    auVar303._0_8_ = local_5b0._0_8_;
    auVar302._8_8_ = local_5b0._8_8_;
    auVar302._0_8_ = local_5b0._0_8_;
    auVar301._8_8_ = local_5b0._8_8_;
    auVar301._0_8_ = local_5b0._0_8_;
    auVar300._8_8_ = local_5b0._8_8_;
    auVar300._0_8_ = local_5b0._0_8_;
    auVar299._8_8_ = local_5b0._8_8_;
    auVar299._0_8_ = local_5b0._0_8_;
    auVar298._8_8_ = local_5b0._8_8_;
    auVar298._0_8_ = local_5b0._0_8_;
    auVar297._8_8_ = local_5b0._8_8_;
    auVar297._0_8_ = local_5b0._0_8_;
    auVar296._8_8_ = local_5b0._8_8_;
    auVar296._0_8_ = local_5b0._0_8_;
    auVar295._8_8_ = local_5b0._8_8_;
    auVar295._0_8_ = local_5b0._0_8_;
    auVar294._8_8_ = local_5b0._8_8_;
    auVar294._0_8_ = local_5b0._0_8_;
    auVar293._8_8_ = local_5b0._8_8_;
    auVar293._0_8_ = local_5b0._0_8_;
    auVar292._8_8_ = local_5b0._8_8_;
    auVar292._0_8_ = local_5b0._0_8_;
    auVar291._8_8_ = local_5b0._8_8_;
    auVar291._0_8_ = local_5b0._0_8_;
    auVar290._8_8_ = local_5b0._8_8_;
    auVar290._0_8_ = local_5b0._0_8_;
    auVar289._8_8_ = local_5b0._8_8_;
    auVar289._0_8_ = local_5b0._0_8_;
    auVar288._8_8_ = local_5b0._8_8_;
    auVar288._0_8_ = local_5b0._0_8_;
    auVar287._8_8_ = local_5b0._8_8_;
    auVar287._0_8_ = local_5b0._0_8_;
    auVar286._8_8_ = local_5b0._8_8_;
    auVar286._0_8_ = local_5b0._0_8_;
    auVar285._8_8_ = local_5b0._8_8_;
    auVar285._0_8_ = local_5b0._0_8_;
    auVar284._8_8_ = local_5b0._8_8_;
    auVar284._0_8_ = local_5b0._0_8_;
    auVar283._8_8_ = local_5b0._8_8_;
    auVar283._0_8_ = local_5b0._0_8_;
    auVar282._8_8_ = local_5b0._8_8_;
    auVar282._0_8_ = local_5b0._0_8_;
    auVar281._8_8_ = local_5b0._8_8_;
    auVar281._0_8_ = local_5b0._0_8_;
    auVar280._8_8_ = local_5b0._8_8_;
    auVar280._0_8_ = local_5b0._0_8_;
    auVar279._8_8_ = local_5b0._8_8_;
    auVar279._0_8_ = local_5b0._0_8_;
    auVar278._8_8_ = local_5b0._8_8_;
    auVar278._0_8_ = local_5b0._0_8_;
    auVar277._8_8_ = local_5b0._8_8_;
    auVar277._0_8_ = local_5b0._0_8_;
    auVar276._8_8_ = local_5b0._8_8_;
    auVar276._0_8_ = local_5b0._0_8_;
    auVar275._8_8_ = local_5b0._8_8_;
    auVar275._0_8_ = local_5b0._0_8_;
    auVar274._8_8_ = local_5b0._8_8_;
    auVar274._0_8_ = local_5b0._0_8_;
    auVar273._8_8_ = local_5b0._8_8_;
    auVar273._0_8_ = local_5b0._0_8_;
    auVar272._8_8_ = local_5b0._8_8_;
    auVar272._0_8_ = local_5b0._0_8_;
    auVar271._8_8_ = local_5b0._8_8_;
    auVar271._0_8_ = local_5b0._0_8_;
    auVar270._8_8_ = local_5b0._8_8_;
    auVar270._0_8_ = local_5b0._0_8_;
    auVar269._8_8_ = local_5b0._8_8_;
    auVar269._0_8_ = local_5b0._0_8_;
    auVar268._8_8_ = local_5b0._8_8_;
    auVar268._0_8_ = local_5b0._0_8_;
    auVar267._8_8_ = local_5b0._8_8_;
    auVar267._0_8_ = local_5b0._0_8_;
    auVar266._8_8_ = local_5b0._8_8_;
    auVar266._0_8_ = local_5b0._0_8_;
    auVar265._8_8_ = local_5b0._8_8_;
    auVar265._0_8_ = local_5b0._0_8_;
    auVar264._8_8_ = local_5b0._8_8_;
    auVar264._0_8_ = local_5b0._0_8_;
    auVar263._8_8_ = local_5b0._8_8_;
    auVar263._0_8_ = local_5b0._0_8_;
    auVar262._8_8_ = local_5b0._8_8_;
    auVar262._0_8_ = local_5b0._0_8_;
    auVar261._8_8_ = local_5b0._8_8_;
    auVar261._0_8_ = local_5b0._0_8_;
    auVar260._8_8_ = local_5b0._8_8_;
    auVar260._0_8_ = local_5b0._0_8_;
    auVar259._8_8_ = local_5b0._8_8_;
    auVar259._0_8_ = local_5b0._0_8_;
    auVar258._8_8_ = local_5b0._8_8_;
    auVar258._0_8_ = local_5b0._0_8_;
    auVar257._8_8_ = local_5b0._8_8_;
    auVar257._0_8_ = local_5b0._0_8_;
    auVar256._8_8_ = local_5b0._8_8_;
    auVar256._0_8_ = local_5b0._0_8_;
    auVar255._8_8_ = local_5b0._8_8_;
    auVar255._0_8_ = local_5b0._0_8_;
    auVar254._8_8_ = local_5b0._8_8_;
    auVar254._0_8_ = local_5b0._0_8_;
    auVar253._8_8_ = local_5b0._8_8_;
    auVar253._0_8_ = local_5b0._0_8_;
    auVar252._8_8_ = local_5b0._8_8_;
    auVar252._0_8_ = local_5b0._0_8_;
    auVar251._8_8_ = local_5b0._8_8_;
    auVar251._0_8_ = local_5b0._0_8_;
    auVar250._8_8_ = local_5b0._8_8_;
    auVar250._0_8_ = local_5b0._0_8_;
    auVar249._8_8_ = local_5b0._8_8_;
    auVar249._0_8_ = local_5b0._0_8_;
    auVar248._8_8_ = local_5b0._8_8_;
    auVar248._0_8_ = local_5b0._0_8_;
    auVar247._8_8_ = local_5b0._8_8_;
    auVar247._0_8_ = local_5b0._0_8_;
    auVar246._8_8_ = local_5b0._8_8_;
    auVar246._0_8_ = local_5b0._0_8_;
    auVar245._8_8_ = local_5b0._8_8_;
    auVar245._0_8_ = local_5b0._0_8_;
    auVar244._8_8_ = local_5b0._8_8_;
    auVar244._0_8_ = local_5b0._0_8_;
    auVar243._8_8_ = local_5b0._8_8_;
    auVar243._0_8_ = local_5b0._0_8_;
    auVar242._8_8_ = local_5b0._8_8_;
    auVar242._0_8_ = local_5b0._0_8_;
    lVar713 = *(long *)(lVar716 + 0x10);
    if ((((lVar713 == 0) ||
         (((local_5b0 = auVar242, local_590 = auVar592, lVar714 == 0 ||
           (lVar716 = *(long *)(lVar714 + 0x28), local_5b0 = auVar243, local_590 = auVar593,
           lVar716 == 0)) ||
          (lVar718 = *(long *)(lVar714 + 0x30), local_5b0 = auVar244, local_590 = auVar594,
          lVar718 == 0)))) ||
        (((lVar778 = *(long *)(lVar714 + 0x38), local_5b0 = auVar245, local_590 = auVar595,
          lVar778 == 0 ||
          (lVar743 = *(long *)(lVar714 + 0x58), local_5b0 = auVar246, local_590 = auVar596,
          lVar743 == 0)) ||
         ((((((lVar748 = *(long *)(lVar714 + 0x40), local_5b0 = auVar247, local_590 = auVar597,
              lVar748 == 0 ||
              ((lVar751 = *(long *)(lVar714 + 0x48), local_5b0 = auVar248, local_590 = auVar598,
               lVar751 == 0 ||
               (lVar752 = *(long *)(lVar714 + 0x50), local_5b0 = auVar249, local_590 = auVar599,
               lVar752 == 0)))) || (local_5b0 = auVar250, local_590 = auVar600, lVar715 == 0)) ||
            ((((lVar757 = *(long *)(lVar715 + 0x18), local_5b0 = auVar251, local_590 = auVar601,
               lVar757 == 0 ||
               (lVar760 = *(long *)(lVar715 + 0x38), local_5b0 = auVar252, local_590 = auVar602,
               lVar760 == 0)) ||
              (lVar764 = *(long *)(lVar715 + 0xe0), local_5b0 = auVar253, local_590 = auVar603,
              lVar764 == 0)) ||
             (((lVar768 = *(long *)(lVar715 + 0xe8), local_5b0 = auVar254, local_590 = auVar604,
               lVar768 == 0 ||
               (lVar772 = *(long *)(lVar715 + 0xf0), local_5b0 = auVar255, local_590 = auVar605,
               lVar772 == 0)) ||
              ((lVar719 = *(long *)(lVar715 + 0xf8), local_5b0 = auVar256, local_590 = auVar606,
               lVar719 == 0 ||
               ((lVar788 = *(long *)(lVar715 + 0x100), local_5b0 = auVar257, local_590 = auVar607,
                lVar788 == 0 ||
                (lVar790 = *(long *)(lVar715 + 0x108), local_5b0 = auVar258, local_590 = auVar608,
                lVar790 == 0)))))))))) ||
           ((((lVar791 = *(long *)(lVar715 + 0x118), local_5b0 = auVar259, local_590 = auVar609,
              lVar791 == 0 ||
              (((((lVar793 = *(long *)(lVar715 + 0x120), local_5b0 = auVar260, local_590 = auVar610,
                  lVar793 == 0 ||
                  (lVar753 = *(long *)(lVar715 + 0x30), local_5b0 = auVar261, local_590 = auVar611,
                  lVar753 == 0)) ||
                 (lVar758 = *(long *)(lVar715 + 0x40), local_5b0 = auVar262, local_590 = auVar612,
                 lVar758 == 0)) ||
                ((lVar744 = *(long *)(lVar715 + 0x58), local_5b0 = auVar263, local_590 = auVar613,
                 lVar744 == 0 ||
                 (lVar749 = *(long *)(lVar715 + 200), local_5b0 = auVar264, local_590 = auVar614,
                 lVar749 == 0)))) ||
               (lVar726 = *(long *)(lVar715 + 0xd0), local_5b0 = auVar265, local_590 = auVar615,
               lVar726 == 0)))) ||
             (((lVar781 = *(long *)(lVar715 + 0xd8), local_5b0 = auVar266, local_590 = auVar616,
               lVar781 == 0 ||
               (lVar761 = *(long *)(lVar715 + 0x48), local_5b0 = auVar267, local_590 = auVar617,
               lVar761 == 0)) ||
              (((lVar799 = *(long *)(lVar715 + 0x50), local_5b0 = auVar268, local_590 = auVar618,
                lVar799 == 0 ||
                (((lVar801 = *(long *)(lVar715 + 0x60), local_5b0 = auVar269, local_590 = auVar619,
                  lVar801 == 0 ||
                  (lVar802 = *(long *)(lVar715 + 0x68), local_5b0 = auVar270, local_590 = auVar620,
                  lVar802 == 0)) ||
                 (lVar724 = *(long *)(lVar715 + 0xb8), local_5b0 = auVar271, local_590 = auVar621,
                 lVar724 == 0)))) ||
               (((lVar797 = *(long *)(lVar715 + 0x88), local_5b0 = auVar272, local_590 = auVar622,
                 lVar797 == 0 ||
                 (lVar727 = *(long *)(lVar715 + 0x90), local_5b0 = auVar273, local_590 = auVar623,
                 lVar727 == 0)) ||
                (lVar782 = *(long *)(lVar715 + 0x98), local_5b0 = auVar274, local_590 = auVar624,
                lVar782 == 0)))))))) ||
            ((lVar732 = *(long *)(lVar715 + 0x78), local_5b0 = auVar275, local_590 = auVar625,
             lVar732 == 0 ||
             (lVar745 = *(long *)(lVar715 + 0x20), local_5b0 = auVar276, local_590 = auVar626,
             lVar745 == 0)))))) ||
          ((lVar750 = *(long *)(lVar715 + 0x70), local_5b0 = auVar277, local_590 = auVar627,
           lVar750 == 0 ||
           (((lVar754 = *(long *)(lVar715 + 0x110), local_5b0 = auVar278, local_590 = auVar628,
             lVar754 == 0 ||
             (lVar759 = *(long *)(lVar715 + 0xa8), local_5b0 = auVar279, local_590 = auVar629,
             lVar759 == 0)) ||
            (lVar792 = *(long *)(param_1 + 0x18), local_5b0 = auVar280, local_590 = auVar630,
            lVar792 == 0)))))))))) ||
       (((((lVar787 = *(long *)(param_1 + 0x20), local_5b0 = auVar281, local_590 = auVar631,
           lVar787 == 0 ||
           (lVar789 = *(long *)(param_1 + 0x28), local_5b0 = auVar282, local_590 = auVar632,
           lVar789 == 0)) ||
          (lVar762 = *(long *)(param_1 + 0x30), local_5b0 = auVar283, local_590 = auVar633,
          lVar762 == 0)) ||
         (((((lVar722 = *(long *)(param_1 + 0x38), local_5b0 = auVar284, local_590 = auVar634,
             lVar722 == 0 ||
             (lVar723 = *(long *)(param_1 + 0x40), local_5b0 = auVar285, local_590 = auVar635,
             lVar723 == 0)) ||
            ((lVar730 = *(long *)(param_1 + 0x48), local_5b0 = auVar286, local_590 = auVar636,
             lVar730 == 0 ||
             ((((lVar731 = *(long *)(param_1 + 0x50), local_5b0 = auVar287, local_590 = auVar637,
                lVar731 == 0 ||
                (lVar769 = *(long *)(param_1 + 0x58), local_5b0 = auVar288, local_590 = auVar638,
                lVar769 == 0)) ||
               (lVar770 = *(long *)(param_1 + 0x60), local_5b0 = auVar289, local_590 = auVar639,
               lVar770 == 0)) ||
              ((lVar794 = *(long *)(param_1 + 0x68), local_5b0 = auVar290, local_590 = auVar640,
               lVar794 == 0 ||
               (lVar795 = *(long *)(param_1 + 0x70), local_5b0 = auVar291, local_590 = auVar641,
               lVar795 == 0)))))))) ||
           (lVar773 = *(long *)(param_1 + 0x78), local_5b0 = auVar292, local_590 = auVar642,
           lVar773 == 0)) ||
          ((lVar774 = *(long *)(param_1 + 0x80), local_5b0 = auVar293, local_590 = auVar643,
           lVar774 == 0 || (local_5b0 = auVar294, local_590 = auVar644, lVar717 == 0)))))) ||
        (((((((lVar728 = *(long *)(lVar717 + 0x18), local_5b0 = auVar295, local_590 = auVar645,
              lVar728 == 0 ||
              (((lVar786 = *(long *)(lVar717 + 0x20), local_5b0 = auVar296, local_590 = auVar646,
                lVar786 == 0 ||
                (lVar800 = *(long *)(lVar717 + 0x28), local_5b0 = auVar297, local_590 = auVar647,
                lVar800 == 0)) ||
               (lVar739 = *(long *)(lVar717 + 0x30), local_5b0 = auVar298, local_590 = auVar648,
               lVar739 == 0)))) ||
             (((lVar785 = *(long *)(lVar717 + 0x38), local_5b0 = auVar299, local_590 = auVar649,
               lVar785 == 0 ||
               (lVar783 = *(long *)(lVar717 + 0x40), local_5b0 = auVar300, local_590 = auVar650,
               lVar783 == 0)) ||
              (lVar746 = *(long *)(lVar717 + 0x48), local_5b0 = auVar301, local_590 = auVar651,
              lVar746 == 0)))) ||
            ((lVar765 = *(long *)(lVar717 + 0x50), local_5b0 = auVar302, local_590 = auVar652,
             lVar765 == 0 ||
             (lVar766 = *(long *)(lVar717 + 0x58), local_5b0 = auVar303, local_590 = auVar653,
             lVar766 == 0)))) ||
           ((lVar756 = *(long *)(lVar717 + 0x60), local_5b0 = auVar304, local_590 = auVar654,
            lVar756 == 0 ||
            (((lVar740 = *(long *)(lVar717 + 0x68), local_5b0 = auVar305, local_590 = auVar655,
              lVar740 == 0 ||
              (lVar741 = *(long *)(lVar717 + 0x70), local_5b0 = auVar306, local_590 = auVar656,
              lVar741 == 0)) ||
             (lVar784 = *(long *)(lVar717 + 0x90), local_5b0 = auVar307, local_590 = auVar657,
             lVar784 == 0)))))) ||
          ((lVar717 = *(long *)(lVar717 + 0x78), local_5b0 = auVar308, local_590 = auVar658,
           lVar717 == 0 ||
           (local_5b0 = auVar309, local_590 = auVar659, *(long *)(param_1 + 0xa8) == 0)))) ||
         ((lVar767 = *(long *)(*(long *)(param_1 + 0xa8) + 0x10), local_5b0 = auVar310,
          local_590 = auVar660, lVar767 == 0 ||
          (((lVar775 = *(long *)(param_1 + 0x88), local_5b0 = auVar311, local_590 = auVar661,
            lVar775 == 0 ||
            (lVar771 = *(long *)(lVar775 + 0x10), local_5b0 = auVar312, local_590 = auVar662,
            lVar771 == 0)) ||
           ((lVar798 = *(long *)(lVar775 + 0x18), local_5b0 = auVar313, local_590 = auVar663,
            lVar798 == 0 ||
            ((((lVar775 = *(long *)(lVar775 + 0x20), local_5b0 = auVar314, local_590 = auVar664,
               lVar775 == 0 ||
               (lVar725 = *(long *)(param_1 + 0x90), local_5b0 = auVar315, local_590 = auVar665,
               lVar725 == 0)) ||
              (lVar747 = *(long *)(lVar725 + 0x10), local_5b0 = auVar316, local_590 = auVar666,
              lVar747 == 0)) ||
             ((lVar776 = *(long *)(lVar725 + 0x18), local_5b0 = auVar317, local_590 = auVar667,
              lVar776 == 0 ||
              (lVar725 = *(long *)(lVar725 + 0x20), local_5b0 = auVar318, local_590 = auVar668,
              lVar725 == 0)))))))))))))))) goto LAB_0535dca8;
    local_590._0_8_ = *(undefined8 *)(lVar713 + 0x10);
    uStack_568 = *(undefined8 *)(lVar718 + 0x18);
    local_4b8 = *(undefined8 *)(lVar719 + 0x18);
    local_590._8_8_ = *(undefined8 *)(lVar713 + 0x18);
    local_170 = *(undefined8 *)(lVar767 + 0x10);
    local_168 = *(undefined8 *)(lVar767 + 0x18);
    local_580 = *(undefined8 *)(lVar716 + 0x10);
    local_578 = *(undefined8 *)(lVar716 + 0x18);
    local_570 = *(undefined8 *)(lVar718 + 0x10);
    uStack_500 = *(undefined8 *)(lVar760 + 0x10);
    local_560 = *(undefined8 *)(lVar778 + 0x10);
    local_4f8 = *(undefined8 *)(lVar760 + 0x18);
    local_558 = *(undefined8 *)(lVar778 + 0x18);
    uStack_550 = *(undefined8 *)(lVar743 + 0x10);
    local_180 = *(undefined8 *)(lVar717 + 0x10);
    local_178 = *(undefined8 *)(lVar717 + 0x18);
    local_548 = *(undefined8 *)(lVar743 + 0x18);
    local_160 = *(undefined8 *)(lVar771 + 0x10);
    local_158 = *(undefined8 *)(lVar771 + 0x18);
    uStack_540 = *(undefined8 *)(lVar748 + 0x10);
    local_538 = *(undefined8 *)(lVar748 + 0x18);
    uStack_530 = *(undefined8 *)(lVar751 + 0x10);
    local_528 = *(undefined8 *)(lVar751 + 0x18);
    uStack_520 = *(undefined8 *)(lVar752 + 0x10);
    local_518 = *(undefined8 *)(lVar752 + 0x18);
    uStack_510 = *(undefined8 *)(lVar757 + 0x10);
    local_508 = *(undefined8 *)(lVar757 + 0x18);
    uStack_4f0 = *(undefined8 *)(lVar764 + 0x10);
    local_4e8 = *(undefined8 *)(lVar764 + 0x18);
    uStack_4e0 = *(undefined8 *)(lVar768 + 0x10);
    local_4d8 = *(undefined8 *)(lVar768 + 0x18);
    uStack_4d0 = *(undefined8 *)(lVar772 + 0x10);
    local_4c8 = *(undefined8 *)(lVar772 + 0x18);
    uStack_4c0 = *(undefined8 *)(lVar719 + 0x10);
    local_150 = *(undefined8 *)(lVar798 + 0x10);
    local_148 = *(undefined8 *)(lVar798 + 0x18);
    uStack_4b0 = *(undefined8 *)(lVar788 + 0x10);
    local_4a8 = *(undefined8 *)(lVar788 + 0x18);
    uStack_4a0 = *(undefined8 *)(lVar790 + 0x10);
    local_498 = *(undefined8 *)(lVar790 + 0x18);
    local_1a0 = *(undefined8 *)(lVar741 + 0x10);
    local_198 = *(undefined8 *)(lVar741 + 0x18);
    uStack_490 = *(undefined8 *)(lVar791 + 0x10);
    uStack_f8 = *(undefined8 *)(param_1 + 0xd0);
    local_100 = *(undefined8 *)(param_1 + 200);
    local_488 = *(undefined8 *)(lVar791 + 0x18);
    uStack_480 = *(undefined8 *)(lVar793 + 0x10);
    local_478 = *(undefined8 *)(lVar793 + 0x18);
    local_470 = *(undefined8 *)(lVar753 + 0x10);
    uStack_468 = *(undefined8 *)(lVar753 + 0x18);
    local_450 = *(undefined8 *)(lVar758 + 0x10);
    uStack_448 = *(undefined8 *)(lVar758 + 0x18);
    local_440 = *(undefined8 *)(lVar744 + 0x10);
    uStack_438 = *(undefined8 *)(lVar744 + 0x18);
    local_430 = *(undefined8 *)(lVar749 + 0x10);
    local_428 = *(undefined8 *)(lVar749 + 0x18);
    local_420 = *(undefined8 *)(lVar726 + 0x10);
    local_418 = *(undefined8 *)(lVar726 + 0x18);
    local_410 = *(undefined8 *)(lVar781 + 0x10);
    local_408 = *(undefined8 *)(lVar781 + 0x18);
    local_400 = *(undefined8 *)(lVar761 + 0x10);
    local_3f8 = *(undefined8 *)(lVar761 + 0x18);
    local_3f0 = *(undefined8 *)(lVar799 + 0x10);
    local_3e8 = *(undefined8 *)(lVar799 + 0x18);
    local_3e0 = *(undefined8 *)(lVar801 + 0x10);
    local_3d8 = *(undefined8 *)(lVar801 + 0x18);
    local_3d0 = *(undefined8 *)(lVar802 + 0x10);
    local_3c8 = *(undefined8 *)(lVar802 + 0x18);
    local_190 = *(undefined8 *)(lVar784 + 0x10);
    local_188 = *(undefined8 *)(lVar784 + 0x18);
    local_3c0 = *(undefined8 *)(lVar724 + 0x10);
    local_3b8 = *(undefined8 *)(lVar724 + 0x18);
    local_3b0 = *(undefined8 *)(lVar797 + 0x10);
    local_3a8 = *(undefined8 *)(lVar797 + 0x18);
    local_3a0 = *(undefined8 *)(lVar727 + 0x10);
    local_398 = *(undefined8 *)(lVar727 + 0x18);
    local_390 = *(undefined8 *)(lVar782 + 0x10);
    local_388 = *(undefined8 *)(lVar782 + 0x18);
    local_380 = *(undefined8 *)(lVar732 + 0x10);
    local_378 = *(undefined8 *)(lVar732 + 0x18);
    local_370 = *(undefined8 *)(lVar745 + 0x10);
    local_368 = *(undefined8 *)(lVar745 + 0x18);
    local_360 = *(undefined8 *)(lVar750 + 0x10);
    local_358 = *(undefined8 *)(lVar750 + 0x18);
    local_350 = *(undefined8 *)(lVar754 + 0x10);
    local_348 = *(undefined8 *)(lVar754 + 0x18);
    local_340 = *(undefined8 *)(lVar759 + 0x10);
    local_338 = *(undefined8 *)(lVar759 + 0x18);
    local_330 = *(undefined8 *)(lVar792 + 0x10);
    local_328 = *(undefined8 *)(lVar792 + 0x18);
    local_320 = *(undefined8 *)(lVar787 + 0x10);
    local_318 = *(undefined8 *)(lVar787 + 0x18);
    local_310 = *(undefined8 *)(lVar789 + 0x10);
    local_308 = *(undefined8 *)(lVar789 + 0x18);
    local_300 = *(undefined8 *)(lVar762 + 0x10);
    local_2f8 = *(undefined8 *)(lVar762 + 0x18);
    local_2f0 = *(undefined8 *)(lVar722 + 0x10);
    local_2e8 = *(undefined8 *)(lVar722 + 0x18);
    local_2e0 = *(undefined8 *)(lVar723 + 0x10);
    local_2d8 = *(undefined8 *)(lVar723 + 0x18);
    local_2d0 = *(undefined8 *)(lVar730 + 0x10);
    local_2c8 = *(undefined8 *)(lVar730 + 0x18);
    local_2c0 = *(undefined8 *)(lVar731 + 0x10);
    local_2b8 = *(undefined8 *)(lVar731 + 0x18);
    local_2b0 = *(undefined8 *)(lVar769 + 0x10);
    local_2a8 = *(undefined8 *)(lVar769 + 0x18);
    local_2a0 = *(undefined8 *)(lVar770 + 0x10);
    local_298 = *(undefined8 *)(lVar770 + 0x18);
    local_290 = *(undefined8 *)(lVar794 + 0x10);
    local_288 = *(undefined8 *)(lVar794 + 0x18);
    local_280 = *(undefined8 *)(lVar795 + 0x10);
    local_278 = *(undefined8 *)(lVar795 + 0x18);
    local_270 = *(undefined8 *)(lVar773 + 0x10);
    local_268 = *(undefined8 *)(lVar773 + 0x18);
    local_260 = *(undefined8 *)(lVar774 + 0x10);
    local_258 = *(undefined8 *)(lVar774 + 0x18);
    local_250 = *(undefined8 *)(lVar728 + 0x10);
    local_248 = *(undefined8 *)(lVar728 + 0x18);
    local_240 = *(undefined8 *)(lVar786 + 0x10);
    local_238 = *(undefined8 *)(lVar786 + 0x18);
    local_230 = *(undefined8 *)(lVar800 + 0x10);
    local_228 = *(undefined8 *)(lVar800 + 0x18);
    local_220 = *(undefined8 *)(lVar739 + 0x10);
    local_218 = *(undefined8 *)(lVar739 + 0x18);
    local_210 = *(undefined8 *)(lVar785 + 0x10);
    local_208 = *(undefined8 *)(lVar785 + 0x18);
    local_200 = *(undefined8 *)(lVar783 + 0x10);
    local_1f8 = *(undefined8 *)(lVar783 + 0x18);
    local_1f0 = *(undefined8 *)(lVar746 + 0x10);
    local_1e8 = *(undefined8 *)(lVar746 + 0x18);
    local_140 = *(undefined8 *)(lVar775 + 0x10);
    local_138 = *(undefined8 *)(lVar775 + 0x18);
    local_1e0 = *(undefined8 *)(lVar765 + 0x10);
    local_1d8 = *(undefined8 *)(lVar765 + 0x18);
    local_130 = *(undefined8 *)(lVar747 + 0x10);
    local_128 = *(undefined8 *)(lVar747 + 0x18);
    local_120 = *(undefined8 *)(lVar776 + 0x10);
    local_118 = *(undefined8 *)(lVar776 + 0x18);
    local_1d0 = *(undefined8 *)(lVar766 + 0x10);
    local_1c8 = *(undefined8 *)(lVar766 + 0x18);
    local_1c0 = *(undefined8 *)(lVar756 + 0x10);
    local_1b8 = *(undefined8 *)(lVar756 + 0x18);
    local_1b0 = *(undefined8 *)(lVar740 + 0x10);
    local_1a8 = *(undefined8 *)(lVar740 + 0x18);
    local_110 = *(undefined8 *)(lVar725 + 0x10);
    local_108 = *(undefined8 *)(lVar725 + 0x18);
    uStack_e8 = *(undefined8 *)(param_1 + 0xe0);
    local_f0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_d8 = *(undefined8 *)(param_1 + 0xf0);
    local_e0 = *(undefined8 *)(param_1 + 0xe8);
    uStack_c8 = *(undefined8 *)(param_1 + 0x100);
    local_d0 = *(undefined8 *)(param_1 + 0xf8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x110);
    local_c0 = *(undefined8 *)(param_1 + 0x108);
    uStack_a8 = *(undefined8 *)(param_1 + 0x120);
    local_b0 = *(undefined8 *)(param_1 + 0x118);
    uStack_98 = *(undefined8 *)(param_1 + 0x130);
    local_a0 = *(undefined8 *)(param_1 + 0x128);
    uStack_88 = *(undefined8 *)(param_1 + 0x140);
    local_90 = *(undefined8 *)(param_1 + 0x138);
    local_5f8 = (int)uVar721;
    iStack_5f4 = (int)((ulong)uVar721 >> 0x20);
    iStack_5f0 = (int)uVar806;
    uStack_5ec = (undefined4)((ulong)uVar806 >> 0x20);
    uStack_5e8 = (undefined4)uVar720;
    uStack_5e4 = (undefined4)((ulong)uVar720 >> 0x20);
    local_5e0 = CONCAT44(uVar711,uVar804);
    local_598 = (ulong)uVar710;
    uStack_5d8 = uVar779;
    local_5d0 = uVar729;
    uStack_5c8 = uVar733;
    local_5c0 = uVar734;
    uStack_5b8 = uVar735;
    local_5b0._0_8_ = uVar736;
    local_5b0._8_8_ = uVar737;
    local_5a0 = uVar738;
    local_460 = uStack_500;
    uStack_458 = local_4f8;
    auVar808 = Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<Hammersley_Hammersley2dSeq16>
                         (&local_5f8,iVar712,1,param_2,param_3,*(undefined8 *)PTR_DAT_06d40bf0);
  }
  auVar807 = FUN_06689568(auVar807._0_8_,auVar807._8_8_,auVar808._0_8_,auVar808._8_8_,0);
  uVar806 = auVar807._8_8_;
  uVar721 = auVar807._0_8_;
  lVar713 = FUN_0533f874(0);
  if (lVar713 != 0) {
    iVar712 = FUN_0536a17c(lVar713,0);
    auVar669._8_8_ = local_590._8_8_;
    auVar669._0_8_ = local_590._0_8_;
    auVar319._8_8_ = local_5b0._8_8_;
    auVar319._0_8_ = local_5b0._0_8_;
    if (iVar712 < 1) {
      if (lVar714 != 0) {
        uVar721 = FUN_05377fe0(lVar714,uVar721,uVar806,0);
        return uVar721;
      }
    }
    else {
      local_5b0 = auVar319;
      local_590 = auVar669;
      if (lVar715 != 0) {
        auVar807 = FUN_0537d688(lVar715,uVar721,uVar806,iVar709,0);
        if (lVar714 != 0) {
          auVar808 = FUN_05377fe0(lVar714,uVar721,uVar806,0);
          uVar721 = FUN_06689568(auVar807._0_8_,auVar807._8_8_,auVar808._0_8_,auVar808._8_8_,0);
          return uVar721;
        }
      }
    }
  }
LAB_0535dca8:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


